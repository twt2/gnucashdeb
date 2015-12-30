/********************************************************************\
 * qofbackend.h: api for data storage backend                       *
 * This program is free software; you can redistribute it and/or    *
 * modify it under the terms of the GNU General Public License as   *
 * published by the Free Software Foundation; either version 2 of   *
 * the License, or (at your option) any later version.              *
 *                                                                  *
 * This program is distributed in the hope that it will be useful,  *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of   *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    *
 * GNU General Public License for more details.                     *
 *                                                                  *
 * You should have received a copy of the GNU General Public License*
 * along with this program; if not, contact:                        *
 *                                                                  *
 * Free Software Foundation           Voice:  +1-617-542-5942       *
 * 51 Franklin Street, Fifth Floor    Fax:    +1-617-542-2652       *
 * Boston, MA  02110-1301,  USA       gnu@gnu.org                   *
 *                                                                  *
\********************************************************************/
/** @addtogroup Object
 @{
*/
/** @addtogroup Backend

    The QOF Backend is a pseudo-object providing an interface between the
    engine and a persistant data store (e.g. a server, a database, or
    a file).   Backends are not meant to be used directly by an
    application; instead the Session should be used to make a
    connection with some particular backend.
    There are no backend functions that are 'public' to
    users of the engine.  The backend can, however, report errors to
    the GUI & other front-end users.  This file defines these errors.

    Backends are used to save and restore Entities in a Book.
    @{
*/
/** @file qofbackend.h
    @brief API for data storage Backend
    @author Copyright (C) 2000-2001 Linas Vepstas <linas@linas.org>
    @author Copyright 2004-2005 Neil Williams <linux@codehelp.co.uk>
*/

#ifndef QOF_BACKEND_H
#define QOF_BACKEND_H

#include "qofinstance.h"

#define QOF_MOD_BACKEND "qof.backend"

/** \brief The errors that can be reported to the GUI & other front-end users
 *  \warning (GnuCash) If you modify QofBackendError, please update
 *   src/engine/gw-engine-spec.scm
*/
typedef enum
{
    ERR_BACKEND_NO_ERR = 0,
    ERR_BACKEND_NO_HANDLER,   /**< no backend handler found for this access method (ENOSYS) */
    ERR_BACKEND_NO_BACKEND,   /**< Backend * pointer was unexpectedly null */
    ERR_BACKEND_BAD_URL,      /**< Can't parse url */
    ERR_BACKEND_NO_SUCH_DB,   /**< the named database doesn't exist */
    ERR_BACKEND_CANT_CONNECT, /**< bad dbname/login/passwd or network failure */
    ERR_BACKEND_CONN_LOST,    /**< Lost connection to server */
    ERR_BACKEND_LOCKED,       /**< in use by another user (ETXTBSY) */
    ERR_BACKEND_STORE_EXISTS, /**< File exists, data would be destroyed */
    ERR_BACKEND_READONLY,	    /**< cannot write to file/directory */
    ERR_BACKEND_TOO_NEW,      /**< file/db version newer than what we can read */
    ERR_BACKEND_DATA_CORRUPT, /**< data in db is corrupt */
    ERR_BACKEND_SERVER_ERR,   /**< error in response from server */
    ERR_BACKEND_ALLOC,        /**< internal memory allocation failure */
    ERR_BACKEND_PERM,         /**< user login successful, but no permissions
                               to access the desired object */
    ERR_BACKEND_MODIFIED,     /**< commit of object update failed because
                               another user has modified the object */
    ERR_BACKEND_MOD_DESTROY,  /**< commit of object update failed because
                               another user has deleted the object */
    ERR_BACKEND_MISC,         /**< undetermined error */

    ERR_QOF_OVERFLOW,			/**< EOVERFLOW - generated by strtol or strtoll.

  When converting XML strings into numbers, an overflow has been detected. The XML file
  contains invalid data in a field that is meant to hold a signed long integer or signed long long
  integer.
  */

    /* fileio errors */
    ERR_FILEIO_FILE_BAD_READ = 1000,  /**< read failed or file prematurely truncated */
    ERR_FILEIO_FILE_EMPTY,     /**< file exists, is readable, but is empty */
    ERR_FILEIO_FILE_LOCKERR,   /**< mangled locks (unspecified error) */
    ERR_FILEIO_FILE_NOT_FOUND, /**< not found / no such file */
    ERR_FILEIO_FILE_TOO_OLD,   /**< file version so old we can't read it */
    ERR_FILEIO_UNKNOWN_FILE_TYPE, /**< didn't recognize the file type */
    ERR_FILEIO_PARSE_ERROR,    /**< couldn't parse the data in the file */
    ERR_FILEIO_BACKUP_ERROR,   /**< couldn't make a backup of the file */
    ERR_FILEIO_WRITE_ERROR,    /**< couldn't write to the file */
    ERR_FILEIO_READ_ERROR,     /**< Could not open the file for reading. */
    ERR_FILEIO_NO_ENCODING,    /**< file does not specify encoding */
    ERR_FILEIO_FILE_EACCES,    /**< No read access permission for the given file */
    ERR_FILEIO_RESERVED_WRITE, /**< User attempt to write to a directory reserved
                                    for internal use by GnuCash */
    ERR_FILEIO_FILE_UPGRADE,   /**< file will be upgraded and not be able to be
                                    read by prior versions - warn users*/

    /* network errors */
    ERR_NETIO_SHORT_READ = 2000,  /**< not enough bytes received */
    ERR_NETIO_WRONG_CONTENT_TYPE, /**< wrong kind of server, wrong data served */
    ERR_NETIO_NOT_GNCXML,         /**< whatever it is, we can't parse it. */

    /* database errors */
    ERR_SQL_MISSING_DATA = 3000,  /**< database doesn't contain expected data */
    ERR_SQL_DB_TOO_OLD,           /**< database is old and needs upgrading */
    ERR_SQL_DB_TOO_NEW,		  /**< database is newer, we can't write to it */
    ERR_SQL_DB_BUSY,              /**< database is busy, cannot upgrade version */
    ERR_SQL_BAD_DBI,		  /**< LibDBI has numeric errors */
    ERR_SQL_DBI_UNTESTABLE,       /**< could not complete test for LibDBI bug */

    /* RPC errors */
    ERR_RPC_HOST_UNK = 4000,      /**< Host unknown */
    ERR_RPC_CANT_BIND,            /**< can't bind to address */
    ERR_RPC_CANT_ACCEPT,          /**< can't accept connection */
    ERR_RPC_NO_CONNECTION,        /**< no connection to server */
    ERR_RPC_BAD_VERSION,          /**< RPC Version Mismatch */
    ERR_RPC_FAILED,               /**< Operation failed */
    ERR_RPC_NOT_ADDED,            /**< object not added */
} QofBackendError;

/**
 * A structure that declares backend services that can be gotten.
 * The Provider specifies a URL access method, and specifies the
 * function to create a backend that can handle that URL access
 * function.
 */
typedef struct QofBackendProvider_s QofBackendProvider;

/** \brief Pseudo-object providing an interface between the
 * engine and a persistant data store (e.g. a server, a database,
 * or a file).
 *
 * There are no backend functions that are 'public' to users of the
 * engine.  The backend can, however, report errors to the GUI & other
 * front-end users.
 */
typedef struct QofBackend_s QofBackend;

/** \brief DOCUMENT ME! */
typedef void (*QofBePercentageFunc) (/*@ null @*/ const char *message, double percent);

/** @name Allow access to the begin routine for this backend. */
//@{

void qof_backend_run_begin(QofBackend *be, QofInstance *inst);

gboolean qof_backend_begin_exists(const QofBackend *be);

void qof_backend_run_commit(QofBackend *be, QofInstance *inst);

gboolean qof_backend_commit_exists(const QofBackend *be);
//@}

/** The qof_backend_set_error() routine pushes an error code onto the error
 *  stack. (FIXME: the stack is 1 deep in current implementation).
 */
void qof_backend_set_error (QofBackend *be, QofBackendError err);

/** The qof_backend_get_error() routine pops an error code off the error stack.
 */
QofBackendError qof_backend_get_error (QofBackend *be);

/** Report if the backend is in an error state.
 *  Since get_error resets the error state, its use for branching as the backend
 *  bubbles back up to the session would make the session think that there was
 *  no error.
 * \param be The backend being tested.
 * \return TRUE if the backend has an error set.
 */
gboolean qof_backend_check_error (QofBackend *be);

/** \brief Load a QOF-compatible backend shared library.

\param directory Can be NULL if filename is a complete path.
\param module_name  Name of the .la file that describes the
	shared library. This provides platform independence,
	courtesy of libtool.

\return FALSE in case or error, otherwise TRUE.
*/
gboolean
qof_load_backend_library(const gchar *directory, const gchar* module_name);

/** \brief Finalize all loaded backend sharable libraries. */
void qof_finalize_backend_libraries(void);

/** \brief Retrieve the backend used by this book */
QofBackend* qof_book_get_backend (const QofBook *book);

void qof_book_set_backend (QofBook *book, QofBackend *);

#endif /* QOF_BACKEND_H */
/** @} */
/** @} */
