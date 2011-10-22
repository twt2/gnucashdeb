/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.1
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1 
#define  SWIG_IOError        	   -2 
#define  SWIG_RuntimeError   	   -3 
#define  SWIG_IndexError     	   -4 
#define  SWIG_TypeError      	   -5 
#define  SWIG_DivisionByZero 	   -6 
#define  SWIG_OverflowError  	   -7 
#define  SWIG_SyntaxError    	   -8 
#define  SWIG_ValueError     	   -9 
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12 
#define  SWIG_NullReferenceError   -13


/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1 
#define  SWIG_IOError        	   -2 
#define  SWIG_RuntimeError   	   -3 
#define  SWIG_IndexError     	   -4 
#define  SWIG_TypeError      	   -5 
#define  SWIG_DivisionByZero 	   -6 
#define  SWIG_OverflowError  	   -7 
#define  SWIG_SyntaxError    	   -8 
#define  SWIG_ValueError     	   -9 
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12 
#define  SWIG_NullReferenceError   -13


/* -----------------------------------------------------------------------------
 * swigrun.swg
 *
 * This file contains generic C API SWIG runtime support for pointer
 * type checking.
 * ----------------------------------------------------------------------------- */

/* This should only be incremented when either the layout of swig_type_info changes,
   or for whatever reason, the runtime changes incompatibly */
#define SWIG_RUNTIME_VERSION "4"

/* define SWIG_TYPE_TABLE_NAME as "SWIG_TYPE_TABLE" */
#ifdef SWIG_TYPE_TABLE
# define SWIG_QUOTE_STRING(x) #x
# define SWIG_EXPAND_AND_QUOTE_STRING(x) SWIG_QUOTE_STRING(x)
# define SWIG_TYPE_TABLE_NAME SWIG_EXPAND_AND_QUOTE_STRING(SWIG_TYPE_TABLE)
#else
# define SWIG_TYPE_TABLE_NAME
#endif

/*
  You can use the SWIGRUNTIME and SWIGRUNTIMEINLINE macros for
  creating a static or dynamic library from the SWIG runtime code.
  In 99.9% of the cases, SWIG just needs to declare them as 'static'.
  
  But only do this if strictly necessary, ie, if you have problems
  with your compiler or suchlike.
*/

#ifndef SWIGRUNTIME
# define SWIGRUNTIME SWIGINTERN
#endif

#ifndef SWIGRUNTIMEINLINE
# define SWIGRUNTIMEINLINE SWIGRUNTIME SWIGINLINE
#endif

/*  Generic buffer size */
#ifndef SWIG_BUFFER_SIZE
# define SWIG_BUFFER_SIZE 1024
#endif

/* Flags for pointer conversions */
#define SWIG_POINTER_DISOWN        0x1
#define SWIG_CAST_NEW_MEMORY       0x2

/* Flags for new pointer objects */
#define SWIG_POINTER_OWN           0x1


/* 
   Flags/methods for returning states.
   
   The SWIG conversion methods, as ConvertPtr, return an integer 
   that tells if the conversion was successful or not. And if not,
   an error code can be returned (see swigerrors.swg for the codes).
   
   Use the following macros/flags to set or process the returning
   states.
   
   In old versions of SWIG, code such as the following was usually written:

     if (SWIG_ConvertPtr(obj,vptr,ty.flags) != -1) {
       // success code
     } else {
       //fail code
     }

   Now you can be more explicit:

    int res = SWIG_ConvertPtr(obj,vptr,ty.flags);
    if (SWIG_IsOK(res)) {
      // success code
    } else {
      // fail code
    }

   which is the same really, but now you can also do

    Type *ptr;
    int res = SWIG_ConvertPtr(obj,(void **)(&ptr),ty.flags);
    if (SWIG_IsOK(res)) {
      // success code
      if (SWIG_IsNewObj(res) {
        ...
	delete *ptr;
      } else {
        ...
      }
    } else {
      // fail code
    }
    
   I.e., now SWIG_ConvertPtr can return new objects and you can
   identify the case and take care of the deallocation. Of course that
   also requires SWIG_ConvertPtr to return new result values, such as

      int SWIG_ConvertPtr(obj, ptr,...) {         
        if (<obj is ok>) {			       
          if (<need new object>) {		       
            *ptr = <ptr to new allocated object>; 
            return SWIG_NEWOBJ;		       
          } else {				       
            *ptr = <ptr to old object>;	       
            return SWIG_OLDOBJ;		       
          } 				       
        } else {				       
          return SWIG_BADOBJ;		       
        }					       
      }

   Of course, returning the plain '0(success)/-1(fail)' still works, but you can be
   more explicit by returning SWIG_BADOBJ, SWIG_ERROR or any of the
   SWIG errors code.

   Finally, if the SWIG_CASTRANK_MODE is enabled, the result code
   allows to return the 'cast rank', for example, if you have this

       int food(double)
       int fooi(int);

   and you call
 
      food(1)   // cast rank '1'  (1 -> 1.0)
      fooi(1)   // cast rank '0'

   just use the SWIG_AddCast()/SWIG_CheckState()
*/

#define SWIG_OK                    (0) 
#define SWIG_ERROR                 (-1)
#define SWIG_IsOK(r)               (r >= 0)
#define SWIG_ArgError(r)           ((r != SWIG_ERROR) ? r : SWIG_TypeError)  

/* The CastRankLimit says how many bits are used for the cast rank */
#define SWIG_CASTRANKLIMIT         (1 << 8)
/* The NewMask denotes the object was created (using new/malloc) */
#define SWIG_NEWOBJMASK            (SWIG_CASTRANKLIMIT  << 1)
/* The TmpMask is for in/out typemaps that use temporal objects */
#define SWIG_TMPOBJMASK            (SWIG_NEWOBJMASK << 1)
/* Simple returning values */
#define SWIG_BADOBJ                (SWIG_ERROR)
#define SWIG_OLDOBJ                (SWIG_OK)
#define SWIG_NEWOBJ                (SWIG_OK | SWIG_NEWOBJMASK)
#define SWIG_TMPOBJ                (SWIG_OK | SWIG_TMPOBJMASK)
/* Check, add and del mask methods */
#define SWIG_AddNewMask(r)         (SWIG_IsOK(r) ? (r | SWIG_NEWOBJMASK) : r)
#define SWIG_DelNewMask(r)         (SWIG_IsOK(r) ? (r & ~SWIG_NEWOBJMASK) : r)
#define SWIG_IsNewObj(r)           (SWIG_IsOK(r) && (r & SWIG_NEWOBJMASK))
#define SWIG_AddTmpMask(r)         (SWIG_IsOK(r) ? (r | SWIG_TMPOBJMASK) : r)
#define SWIG_DelTmpMask(r)         (SWIG_IsOK(r) ? (r & ~SWIG_TMPOBJMASK) : r)
#define SWIG_IsTmpObj(r)           (SWIG_IsOK(r) && (r & SWIG_TMPOBJMASK))

/* Cast-Rank Mode */
#if defined(SWIG_CASTRANK_MODE)
#  ifndef SWIG_TypeRank
#    define SWIG_TypeRank             unsigned long
#  endif
#  ifndef SWIG_MAXCASTRANK            /* Default cast allowed */
#    define SWIG_MAXCASTRANK          (2)
#  endif
#  define SWIG_CASTRANKMASK          ((SWIG_CASTRANKLIMIT) -1)
#  define SWIG_CastRank(r)           (r & SWIG_CASTRANKMASK)
SWIGINTERNINLINE int SWIG_AddCast(int r) { 
  return SWIG_IsOK(r) ? ((SWIG_CastRank(r) < SWIG_MAXCASTRANK) ? (r + 1) : SWIG_ERROR) : r;
}
SWIGINTERNINLINE int SWIG_CheckState(int r) { 
  return SWIG_IsOK(r) ? SWIG_CastRank(r) + 1 : 0; 
}
#else /* no cast-rank mode */
#  define SWIG_AddCast
#  define SWIG_CheckState(r) (SWIG_IsOK(r) ? 1 : 0)
#endif


#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void *(*swig_converter_func)(void *, int *);
typedef struct swig_type_info *(*swig_dycast_func)(void **);

/* Structure to store information on one type */
typedef struct swig_type_info {
  const char             *name;			/* mangled name of this type */
  const char             *str;			/* human readable name of this type */
  swig_dycast_func        dcast;		/* dynamic cast function down a hierarchy */
  struct swig_cast_info  *cast;			/* linked list of types that can cast into this type */
  void                   *clientdata;		/* language specific type data */
  int                    owndata;		/* flag if the structure owns the clientdata */
} swig_type_info;

/* Structure to store a type and conversion function used for casting */
typedef struct swig_cast_info {
  swig_type_info         *type;			/* pointer to type that is equivalent to this type */
  swig_converter_func     converter;		/* function to cast the void pointers */
  struct swig_cast_info  *next;			/* pointer to next cast in linked list */
  struct swig_cast_info  *prev;			/* pointer to the previous cast */
} swig_cast_info;

/* Structure used to store module information
 * Each module generates one structure like this, and the runtime collects
 * all of these structures and stores them in a circularly linked list.*/
typedef struct swig_module_info {
  swig_type_info         **types;		/* Array of pointers to swig_type_info structures that are in this module */
  size_t                 size;		        /* Number of types in this module */
  struct swig_module_info *next;		/* Pointer to next element in circularly linked list */
  swig_type_info         **type_initial;	/* Array of initially generated type structures */
  swig_cast_info         **cast_initial;	/* Array of initially generated casting structures */
  void                    *clientdata;		/* Language specific module data */
} swig_module_info;

/* 
  Compare two type names skipping the space characters, therefore
  "char*" == "char *" and "Class<int>" == "Class<int >", etc.

  Return 0 when the two name types are equivalent, as in
  strncmp, but skipping ' '.
*/
SWIGRUNTIME int
SWIG_TypeNameComp(const char *f1, const char *l1,
		  const char *f2, const char *l2) {
  for (;(f1 != l1) && (f2 != l2); ++f1, ++f2) {
    while ((*f1 == ' ') && (f1 != l1)) ++f1;
    while ((*f2 == ' ') && (f2 != l2)) ++f2;
    if (*f1 != *f2) return (*f1 > *f2) ? 1 : -1;
  }
  return (int)((l1 - f1) - (l2 - f2));
}

/*
  Check type equivalence in a name list like <name1>|<name2>|...
  Return 0 if not equal, 1 if equal
*/
SWIGRUNTIME int
SWIG_TypeEquiv(const char *nb, const char *tb) {
  int equiv = 0;
  const char* te = tb + strlen(tb);
  const char* ne = nb;
  while (!equiv && *ne) {
    for (nb = ne; *ne; ++ne) {
      if (*ne == '|') break;
    }
    equiv = (SWIG_TypeNameComp(nb, ne, tb, te) == 0) ? 1 : 0;
    if (*ne) ++ne;
  }
  return equiv;
}

/*
  Check type equivalence in a name list like <name1>|<name2>|...
  Return 0 if equal, -1 if nb < tb, 1 if nb > tb
*/
SWIGRUNTIME int
SWIG_TypeCompare(const char *nb, const char *tb) {
  int equiv = 0;
  const char* te = tb + strlen(tb);
  const char* ne = nb;
  while (!equiv && *ne) {
    for (nb = ne; *ne; ++ne) {
      if (*ne == '|') break;
    }
    equiv = (SWIG_TypeNameComp(nb, ne, tb, te) == 0) ? 1 : 0;
    if (*ne) ++ne;
  }
  return equiv;
}


/*
  Check the typename
*/
SWIGRUNTIME swig_cast_info *
SWIG_TypeCheck(const char *c, swig_type_info *ty) {
  if (ty) {
    swig_cast_info *iter = ty->cast;
    while (iter) {
      if (strcmp(iter->type->name, c) == 0) {
        if (iter == ty->cast)
          return iter;
        /* Move iter to the top of the linked list */
        iter->prev->next = iter->next;
        if (iter->next)
          iter->next->prev = iter->prev;
        iter->next = ty->cast;
        iter->prev = 0;
        if (ty->cast) ty->cast->prev = iter;
        ty->cast = iter;
        return iter;
      }
      iter = iter->next;
    }
  }
  return 0;
}

/* 
  Identical to SWIG_TypeCheck, except strcmp is replaced with a pointer comparison
*/
SWIGRUNTIME swig_cast_info *
SWIG_TypeCheckStruct(swig_type_info *from, swig_type_info *ty) {
  if (ty) {
    swig_cast_info *iter = ty->cast;
    while (iter) {
      if (iter->type == from) {
        if (iter == ty->cast)
          return iter;
        /* Move iter to the top of the linked list */
        iter->prev->next = iter->next;
        if (iter->next)
          iter->next->prev = iter->prev;
        iter->next = ty->cast;
        iter->prev = 0;
        if (ty->cast) ty->cast->prev = iter;
        ty->cast = iter;
        return iter;
      }
      iter = iter->next;
    }
  }
  return 0;
}

/*
  Cast a pointer up an inheritance hierarchy
*/
SWIGRUNTIMEINLINE void *
SWIG_TypeCast(swig_cast_info *ty, void *ptr, int *newmemory) {
  return ((!ty) || (!ty->converter)) ? ptr : (*ty->converter)(ptr, newmemory);
}

/* 
   Dynamic pointer casting. Down an inheritance hierarchy
*/
SWIGRUNTIME swig_type_info *
SWIG_TypeDynamicCast(swig_type_info *ty, void **ptr) {
  swig_type_info *lastty = ty;
  if (!ty || !ty->dcast) return ty;
  while (ty && (ty->dcast)) {
    ty = (*ty->dcast)(ptr);
    if (ty) lastty = ty;
  }
  return lastty;
}

/*
  Return the name associated with this type
*/
SWIGRUNTIMEINLINE const char *
SWIG_TypeName(const swig_type_info *ty) {
  return ty->name;
}

/*
  Return the pretty name associated with this type,
  that is an unmangled type name in a form presentable to the user.
*/
SWIGRUNTIME const char *
SWIG_TypePrettyName(const swig_type_info *type) {
  /* The "str" field contains the equivalent pretty names of the
     type, separated by vertical-bar characters.  We choose
     to print the last name, as it is often (?) the most
     specific. */
  if (!type) return NULL;
  if (type->str != NULL) {
    const char *last_name = type->str;
    const char *s;
    for (s = type->str; *s; s++)
      if (*s == '|') last_name = s+1;
    return last_name;
  }
  else
    return type->name;
}

/* 
   Set the clientdata field for a type
*/
SWIGRUNTIME void
SWIG_TypeClientData(swig_type_info *ti, void *clientdata) {
  swig_cast_info *cast = ti->cast;
  /* if (ti->clientdata == clientdata) return; */
  ti->clientdata = clientdata;
  
  while (cast) {
    if (!cast->converter) {
      swig_type_info *tc = cast->type;
      if (!tc->clientdata) {
	SWIG_TypeClientData(tc, clientdata);
      }
    }    
    cast = cast->next;
  }
}
SWIGRUNTIME void
SWIG_TypeNewClientData(swig_type_info *ti, void *clientdata) {
  SWIG_TypeClientData(ti, clientdata);
  ti->owndata = 1;
}
  
/*
  Search for a swig_type_info structure only by mangled name
  Search is a O(log #types)
  
  We start searching at module start, and finish searching when start == end.  
  Note: if start == end at the beginning of the function, we go all the way around
  the circular list.
*/
SWIGRUNTIME swig_type_info *
SWIG_MangledTypeQueryModule(swig_module_info *start, 
                            swig_module_info *end, 
		            const char *name) {
  swig_module_info *iter = start;
  do {
    if (iter->size) {
      register size_t l = 0;
      register size_t r = iter->size - 1;
      do {
	/* since l+r >= 0, we can (>> 1) instead (/ 2) */
	register size_t i = (l + r) >> 1; 
	const char *iname = iter->types[i]->name;
	if (iname) {
	  register int compare = strcmp(name, iname);
	  if (compare == 0) {	    
	    return iter->types[i];
	  } else if (compare < 0) {
	    if (i) {
	      r = i - 1;
	    } else {
	      break;
	    }
	  } else if (compare > 0) {
	    l = i + 1;
	  }
	} else {
	  break; /* should never happen */
	}
      } while (l <= r);
    }
    iter = iter->next;
  } while (iter != end);
  return 0;
}

/*
  Search for a swig_type_info structure for either a mangled name or a human readable name.
  It first searches the mangled names of the types, which is a O(log #types)
  If a type is not found it then searches the human readable names, which is O(#types).
  
  We start searching at module start, and finish searching when start == end.  
  Note: if start == end at the beginning of the function, we go all the way around
  the circular list.
*/
SWIGRUNTIME swig_type_info *
SWIG_TypeQueryModule(swig_module_info *start, 
                     swig_module_info *end, 
		     const char *name) {
  /* STEP 1: Search the name field using binary search */
  swig_type_info *ret = SWIG_MangledTypeQueryModule(start, end, name);
  if (ret) {
    return ret;
  } else {
    /* STEP 2: If the type hasn't been found, do a complete search
       of the str field (the human readable name) */
    swig_module_info *iter = start;
    do {
      register size_t i = 0;
      for (; i < iter->size; ++i) {
	if (iter->types[i]->str && (SWIG_TypeEquiv(iter->types[i]->str, name)))
	  return iter->types[i];
      }
      iter = iter->next;
    } while (iter != end);
  }
  
  /* neither found a match */
  return 0;
}

/* 
   Pack binary data into a string
*/
SWIGRUNTIME char *
SWIG_PackData(char *c, void *ptr, size_t sz) {
  static const char hex[17] = "0123456789abcdef";
  register const unsigned char *u = (unsigned char *) ptr;
  register const unsigned char *eu =  u + sz;
  for (; u != eu; ++u) {
    register unsigned char uu = *u;
    *(c++) = hex[(uu & 0xf0) >> 4];
    *(c++) = hex[uu & 0xf];
  }
  return c;
}

/* 
   Unpack binary data from a string
*/
SWIGRUNTIME const char *
SWIG_UnpackData(const char *c, void *ptr, size_t sz) {
  register unsigned char *u = (unsigned char *) ptr;
  register const unsigned char *eu = u + sz;
  for (; u != eu; ++u) {
    register char d = *(c++);
    register unsigned char uu;
    if ((d >= '0') && (d <= '9'))
      uu = ((d - '0') << 4);
    else if ((d >= 'a') && (d <= 'f'))
      uu = ((d - ('a'-10)) << 4);
    else 
      return (char *) 0;
    d = *(c++);
    if ((d >= '0') && (d <= '9'))
      uu |= (d - '0');
    else if ((d >= 'a') && (d <= 'f'))
      uu |= (d - ('a'-10));
    else 
      return (char *) 0;
    *u = uu;
  }
  return c;
}

/* 
   Pack 'void *' into a string buffer.
*/
SWIGRUNTIME char *
SWIG_PackVoidPtr(char *buff, void *ptr, const char *name, size_t bsz) {
  char *r = buff;
  if ((2*sizeof(void *) + 2) > bsz) return 0;
  *(r++) = '_';
  r = SWIG_PackData(r,&ptr,sizeof(void *));
  if (strlen(name) + 1 > (bsz - (r - buff))) return 0;
  strcpy(r,name);
  return buff;
}

SWIGRUNTIME const char *
SWIG_UnpackVoidPtr(const char *c, void **ptr, const char *name) {
  if (*c != '_') {
    if (strcmp(c,"NULL") == 0) {
      *ptr = (void *) 0;
      return name;
    } else {
      return 0;
    }
  }
  return SWIG_UnpackData(++c,ptr,sizeof(void *));
}

SWIGRUNTIME char *
SWIG_PackDataName(char *buff, void *ptr, size_t sz, const char *name, size_t bsz) {
  char *r = buff;
  size_t lname = (name ? strlen(name) : 0);
  if ((2*sz + 2 + lname) > bsz) return 0;
  *(r++) = '_';
  r = SWIG_PackData(r,ptr,sz);
  if (lname) {
    strncpy(r,name,lname+1);
  } else {
    *r = 0;
  }
  return buff;
}

SWIGRUNTIME const char *
SWIG_UnpackDataName(const char *c, void *ptr, size_t sz, const char *name) {
  if (*c != '_') {
    if (strcmp(c,"NULL") == 0) {
      memset(ptr,0,sz);
      return name;
    } else {
      return 0;
    }
  }
  return SWIG_UnpackData(++c,ptr,sz);
}

#ifdef __cplusplus
}
#endif
/* -----------------------------------------------------------------------------
 * guile_scm_run.swg
 * ----------------------------------------------------------------------------- */

#include <libguile.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef SCM (*swig_guile_proc)();
typedef SCM (*guile_destructor)(SCM);

typedef struct swig_guile_clientdata {
  guile_destructor destroy;
  SCM goops_class;
} swig_guile_clientdata;

#define SWIG_scm2str(s) \
  SWIG_Guile_scm2newstr(s, NULL)
#define SWIG_malloc(size) \
  SCM_MUST_MALLOC(size)
#define SWIG_free(mem) \
  scm_must_free(mem)
#define SWIG_ConvertPtr(s, result, type, flags) \
  SWIG_Guile_ConvertPtr(s, result, type, flags)
#define SWIG_MustGetPtr(s, type, argnum, flags) \
  SWIG_Guile_MustGetPtr(s, type, argnum, flags, FUNC_NAME)
#define SWIG_NewPointerObj(ptr, type, owner) \
  SWIG_Guile_NewPointerObj((void*)ptr, type, owner)
#define SWIG_PointerAddress(object) \
  SWIG_Guile_PointerAddress(object)
#define SWIG_PointerType(object) \
  SWIG_Guile_PointerType(object)
#define SWIG_IsPointerOfType(object, type) \
  SWIG_Guile_IsPointerOfType(object, type)
#define SWIG_IsPointer(object) \
  SWIG_Guile_IsPointer(object)
#define SWIG_contract_assert(expr, msg)				\
  if (!(expr))							\
    scm_error(scm_str2symbol("swig-contract-assertion-failed"),	\
	      (char *) FUNC_NAME, (char *) msg,			\
	      SCM_EOL, SCM_BOOL_F); else

/* for C++ member pointers, ie, member methods */
#define SWIG_ConvertMember(obj, ptr, sz, ty) \
  SWIG_Guile_ConvertMember(obj, ptr, sz, ty, FUNC_NAME)
#define SWIG_NewMemberObj(ptr, sz, type) \
  SWIG_Guile_NewMemberObj(ptr, sz, type, FUNC_NAME)
  
/* Runtime API */
static swig_module_info *SWIG_Guile_GetModule(void);
#define SWIG_GetModule(clientdata) SWIG_Guile_GetModule()
#define SWIG_SetModule(clientdata, pointer) SWIG_Guile_SetModule(pointer)
  
SWIGINTERN char *
SWIG_Guile_scm2newstr(SCM str, size_t *len) {
#define FUNC_NAME "SWIG_Guile_scm2newstr"
  char *ret;
  size_t l;

  SCM_ASSERT (SCM_STRINGP(str), str, 1, FUNC_NAME);
  
  l = SCM_STRING_LENGTH(str);
  ret = (char *) SWIG_malloc( (l + 1) * sizeof(char));
  if (!ret) return NULL;

  memcpy(ret, SCM_STRING_CHARS(str), l);
  ret[l] = '\0';
  if (len) *len = l;
  return ret;
#undef FUNC_NAME
}

static int swig_initialized = 0;
static scm_t_bits swig_tag = 0;
static scm_t_bits swig_collectable_tag = 0;
static scm_t_bits swig_destroyed_tag = 0;
static scm_t_bits swig_member_function_tag = 0;
static SCM swig_make_func = SCM_EOL;
static SCM swig_keyword = SCM_EOL;
static SCM swig_symbol = SCM_EOL;

#define SWIG_Guile_GetSmob(x) \
  ( SCM_NNULLP(x) && SCM_INSTANCEP(x) && SCM_NFALSEP(scm_slot_exists_p(x, swig_symbol)) \
      ? scm_slot_ref(x, swig_symbol) : (x) )

SWIGINTERN SCM
SWIG_Guile_NewPointerObj(void *ptr, swig_type_info *type, int owner)
{
  if (ptr == NULL)
    return SCM_EOL;
  else {
    SCM smob;
    swig_guile_clientdata *cdata = (swig_guile_clientdata *) type->clientdata;
    if (owner)
      SCM_NEWSMOB2(smob, swig_collectable_tag, ptr, (void *) type);
    else
      SCM_NEWSMOB2(smob, swig_tag, ptr, (void *) type);

    if (!cdata || SCM_NULLP(cdata->goops_class) || swig_make_func == SCM_EOL ) {
      return smob;
    } else {
      /* the scm_make() C function only handles the creation of gf,
	 methods and classes (no instances) the (make ...) function is
	 later redefined in goops.scm.  So we need to call that
	 Scheme function. */
      return scm_apply(swig_make_func,
		       scm_list_3(cdata->goops_class,
				  swig_keyword,
				  smob),
		       SCM_EOL);
    }
  }
}

SWIGINTERN unsigned long
SWIG_Guile_PointerAddress(SCM object)
{
  SCM smob = SWIG_Guile_GetSmob(object);
  if (SCM_NULLP(smob)) return 0;
  else if (SCM_SMOB_PREDICATE(swig_tag, smob)
	   || SCM_SMOB_PREDICATE(swig_collectable_tag, smob)
	   || SCM_SMOB_PREDICATE(swig_destroyed_tag, smob)) {
    return (unsigned long) (void *) SCM_CELL_WORD_1(smob);
  }
  else scm_wrong_type_arg("SWIG-Guile-PointerAddress", 1, object);
}

SWIGINTERN swig_type_info *
SWIG_Guile_PointerType(SCM object)
{
  SCM smob = SWIG_Guile_GetSmob(object);
  if (SCM_NULLP(smob)) return NULL;
  else if (SCM_SMOB_PREDICATE(swig_tag, smob)
	   || SCM_SMOB_PREDICATE(swig_collectable_tag, smob)
	   || SCM_SMOB_PREDICATE(swig_destroyed_tag, smob)) {
    return (swig_type_info *) SCM_CELL_WORD_2(smob);
  }
  else scm_wrong_type_arg("SWIG-Guile-PointerType", 1, object);
}
  
SWIGINTERN int
SWIG_Guile_ConvertPtr(SCM s, void **result, swig_type_info *type, int flags)
{
  swig_cast_info *cast;
  swig_type_info *from;
  SCM smob = SWIG_Guile_GetSmob(s);

  if (SCM_NULLP(smob)) {
    *result = NULL;
    return SWIG_OK;
  } else if (SCM_SMOB_PREDICATE(swig_tag, smob) || SCM_SMOB_PREDICATE(swig_collectable_tag, smob)) {
    /* we do not accept smobs representing destroyed pointers */
    from = (swig_type_info *) SCM_CELL_WORD_2(smob);
    if (!from) return SWIG_ERROR;
    if (type) {
      cast = SWIG_TypeCheckStruct(from, type);
      if (cast) {
        int newmemory = 0;
        *result = SWIG_TypeCast(cast, (void *) SCM_CELL_WORD_1(smob), &newmemory);
        assert(!newmemory); /* newmemory handling not yet implemented */
        return SWIG_OK;
      } else {
        return SWIG_ERROR;
      }
    } else {
      *result = (void *) SCM_CELL_WORD_1(smob);
      return SWIG_OK;
    }
  }
  return SWIG_ERROR;
}

SWIGINTERNINLINE void *
SWIG_Guile_MustGetPtr (SCM s, swig_type_info *type,
		       int argnum, int flags, const char *func_name)
{
  void *result;
  int res = SWIG_Guile_ConvertPtr(s, &result, type, flags);
  if (!SWIG_IsOK(res)) {
    /* type mismatch */
    scm_wrong_type_arg((char *) func_name, argnum, s);
  }
  return result;
}

SWIGINTERNINLINE int
SWIG_Guile_IsPointerOfType (SCM s, swig_type_info *type)
{
  void *result;
  if (SWIG_Guile_ConvertPtr(s, &result, type, 0)) {
    /* type mismatch */
    return 0;
  }
  else return 1;
}

SWIGINTERNINLINE int
SWIG_Guile_IsPointer (SCM s)
{
  /* module might not be initialized yet, so initialize it */
  SWIG_Guile_GetModule();
  return SWIG_Guile_IsPointerOfType (s, NULL);
}

/* Mark a pointer object non-collectable */
SWIGINTERN void
SWIG_Guile_MarkPointerNoncollectable(SCM s)
{
  SCM smob = SWIG_Guile_GetSmob(s);
  if (!SCM_NULLP(smob)) {
    if (SCM_SMOB_PREDICATE(swig_tag, smob) || SCM_SMOB_PREDICATE(swig_collectable_tag, smob)) {
      SCM_SET_CELL_TYPE(smob, swig_tag);
    }
    else scm_wrong_type_arg(NULL, 0, s);
  }
}

/* Mark a pointer object destroyed */
SWIGINTERN void
SWIG_Guile_MarkPointerDestroyed(SCM s)
{
  SCM smob = SWIG_Guile_GetSmob(s);
  if (!SCM_NULLP(smob)) {
    if (SCM_SMOB_PREDICATE(swig_tag, smob) || SCM_SMOB_PREDICATE(swig_collectable_tag, smob)) {
      SCM_SET_CELL_TYPE(smob, swig_destroyed_tag);
    }
    else scm_wrong_type_arg(NULL, 0, s);
  }
}

/* Member functions */

SWIGINTERN SCM
SWIG_Guile_NewMemberObj(void *ptr, size_t sz, swig_type_info *type,
			const char *func_name)
{
  SCM smob;
  void *copy = malloc(sz);
  memcpy(copy, ptr, sz);
  SCM_NEWSMOB2(smob, swig_member_function_tag, copy, (void *) type);
  return smob;
}

SWIGINTERN int
SWIG_Guile_ConvertMember(SCM smob, void *ptr, size_t sz, swig_type_info *type,
			 const char *func_name)
{
  swig_cast_info *cast;
  swig_type_info *from;

  if (SCM_SMOB_PREDICATE(swig_member_function_tag, smob)) {
    from = (swig_type_info *) SCM_CELL_WORD_2(smob);
    if (!from) return SWIG_ERROR;
    if (type) {
      cast = SWIG_TypeCheckStruct(from, type);
      if (!cast) return SWIG_ERROR;
    }
    memcpy(ptr, (void *) SCM_CELL_WORD_1(smob), sz);
    return SWIG_OK;
  }
  return SWIG_ERROR;
}
     

/* Init */

SWIGINTERN int
print_swig_aux (SCM swig_smob, SCM port, scm_print_state *pstate, 
                const char *attribute)
{
  swig_type_info *type;
  
  type = (swig_type_info *) SCM_CELL_WORD_2(swig_smob);
  if (type) {
    scm_puts((char *) "#<", port);
    scm_puts((char *) attribute, port);
    scm_puts((char *) "swig-pointer ", port);
    scm_puts((char *) SWIG_TypePrettyName(type), port);
    scm_puts((char *) " ", port);
    scm_intprint((long) SCM_CELL_WORD_1(swig_smob), 16, port);
    scm_puts((char *) ">", port);
    /* non-zero means success */
    return 1;
  } else {
    return 0;
  }
}

  
SWIGINTERN int
print_swig (SCM swig_smob, SCM port, scm_print_state *pstate)
{
  return print_swig_aux(swig_smob, port, pstate, "");
}

SWIGINTERN int
print_collectable_swig (SCM swig_smob, SCM port, scm_print_state *pstate)
{
  return print_swig_aux(swig_smob, port, pstate, "collectable-");
}

SWIGINTERN int
print_destroyed_swig (SCM swig_smob, SCM port, scm_print_state *pstate)
{
  return print_swig_aux(swig_smob, port, pstate, "destroyed-");
}

SWIGINTERN int
print_member_function_swig (SCM swig_smob, SCM port, scm_print_state *pstate)
{
  swig_type_info *type;
  type = (swig_type_info *) SCM_CELL_WORD_2(swig_smob);
  if (type) {
    scm_puts((char *) "#<", port);
    scm_puts((char *) "swig-member-function-pointer ", port);
    scm_puts((char *) SWIG_TypePrettyName(type), port);
    scm_puts((char *) " >", port);
    /* non-zero means success */
    return 1;
  } else {
    return 0;
  }
}

SWIGINTERN SCM
equalp_swig (SCM A, SCM B)
{
  if (SCM_CELL_WORD_0(A) == SCM_CELL_WORD_0(B) && SCM_CELL_WORD_1(A) == SCM_CELL_WORD_1(B) 
      && SCM_CELL_WORD_2(A) == SCM_CELL_WORD_2(B))
    return SCM_BOOL_T;
  else return SCM_BOOL_F;
}

SWIGINTERN size_t
free_swig(SCM A)
{
  swig_type_info *type = (swig_type_info *) SCM_CELL_WORD_2(A);
  if (type) {
    if (type->clientdata && ((swig_guile_clientdata *)type->clientdata)->destroy)
      ((swig_guile_clientdata *)type->clientdata)->destroy(A);
  } 
  return 0;
}

SWIGINTERN size_t
free_swig_member_function(SCM A)
{
  free((swig_type_info *) SCM_CELL_WORD_1(A));
  return 0;
}

SWIGINTERN int
ensure_smob_tag(SCM swig_module,
		scm_t_bits *tag_variable,
		const char *smob_name,
		const char *scheme_variable_name)
{
  SCM variable = scm_sym2var(scm_str2symbol(scheme_variable_name),
			     scm_module_lookup_closure(swig_module),
			     SCM_BOOL_T);
  if (SCM_UNBNDP(SCM_VARIABLE_REF(variable))) {
    *tag_variable = scm_make_smob_type((char*)scheme_variable_name, 0);
    SCM_VARIABLE_SET(variable,
		     scm_ulong2num(*tag_variable));
    return 1;
  }
  else {
    *tag_variable = scm_num2ulong(SCM_VARIABLE_REF(variable), 0,
				  "SWIG_Guile_Init");
    return 0;
  }
}

SWIGINTERN SCM
SWIG_Guile_Init ()
{
  static SCM swig_module;
  
  if (swig_initialized) return swig_module;
  swig_initialized = 1;

  swig_module = scm_c_resolve_module("Swig swigrun");
  if (ensure_smob_tag(swig_module, &swig_tag,
		      "swig-pointer", "swig-pointer-tag")) {
    scm_set_smob_print(swig_tag, print_swig);
    scm_set_smob_equalp(swig_tag, equalp_swig);
  }
  if (ensure_smob_tag(swig_module, &swig_collectable_tag,
		      "collectable-swig-pointer", "collectable-swig-pointer-tag")) {
    scm_set_smob_print(swig_collectable_tag, print_collectable_swig);
    scm_set_smob_equalp(swig_collectable_tag, equalp_swig);
    scm_set_smob_free(swig_collectable_tag, free_swig);
  }
  if (ensure_smob_tag(swig_module, &swig_destroyed_tag,
		      "destroyed-swig-pointer", "destroyed-swig-pointer-tag")) {
    scm_set_smob_print(swig_destroyed_tag, print_destroyed_swig);
    scm_set_smob_equalp(swig_destroyed_tag, equalp_swig);
  }
  if (ensure_smob_tag(swig_module, &swig_member_function_tag,
		      "swig-member-function-pointer", "swig-member-function-pointer-tag")) {
    scm_set_smob_print(swig_member_function_tag, print_member_function_swig);
    scm_set_smob_free(swig_member_function_tag, free_swig_member_function);
  }
  swig_make_func = scm_permanent_object(
  scm_variable_ref(scm_c_module_lookup(scm_c_resolve_module("oop goops"), "make")));
  swig_keyword = scm_permanent_object(scm_c_make_keyword((char*) "init-smob"));
  swig_symbol = scm_permanent_object(scm_str2symbol("swig-smob"));
#ifdef SWIG_INIT_RUNTIME_MODULE
  SWIG_INIT_RUNTIME_MODULE
#endif

  return swig_module;
}

SWIGINTERN swig_module_info *
SWIG_Guile_GetModule(void)
{
  SCM module;
  SCM variable;

  module = SWIG_Guile_Init();

  variable = scm_sym2var(scm_str2symbol("swig-type-list-address" SWIG_RUNTIME_VERSION SWIG_TYPE_TABLE_NAME),
			       scm_module_lookup_closure(module),
			       SCM_BOOL_T);
  if (SCM_UNBNDP(SCM_VARIABLE_REF(variable))) {
    return NULL;
  } else {
    return (swig_module_info *) scm_num2ulong(SCM_VARIABLE_REF(variable), 0, "SWIG_Guile_Init");
  }
}

SWIGINTERN void
SWIG_Guile_SetModule(swig_module_info *swig_module)
{
  SCM module;
  SCM variable;

  module = SWIG_Guile_Init();
    
  variable = scm_sym2var(scm_str2symbol("swig-type-list-address" SWIG_RUNTIME_VERSION SWIG_TYPE_TABLE_NAME),
			       scm_module_lookup_closure(module),
			       SCM_BOOL_T);

  SCM_VARIABLE_SET(variable, scm_ulong2num((unsigned long) swig_module));
}

SWIGINTERN int
SWIG_Guile_GetArgs (SCM *dest, SCM rest,
		    int reqargs, int optargs,
		    const char *procname)
{
  int i;
  int num_args_passed = 0;
  for (i = 0; i<reqargs; i++) {
    if (!SCM_CONSP(rest))
      scm_wrong_num_args(scm_makfrom0str((char *) procname));
    *dest++ = SCM_CAR(rest);
    rest = SCM_CDR(rest);
    num_args_passed++;
  }
  for (i = 0; i<optargs && SCM_CONSP(rest); i++) {
    *dest++ = SCM_CAR(rest);
    rest = SCM_CDR(rest);
    num_args_passed++;
  }
  for (; i<optargs; i++)
    *dest++ = SCM_UNDEFINED;
  if (!SCM_NULLP(rest))
    scm_wrong_num_args(scm_makfrom0str((char *) procname));
  return num_args_passed;
}

#ifdef __cplusplus
}
#endif
/* -----------------------------------------------------------------------------*
   Standard SWIG API for use inside user code.
 
   Don't include this file directly, run the command
   swig -python -external-runtime
   Also, read the Modules chapter of the SWIG Manual.
 
 * -----------------------------------------------------------------------------*/

#ifdef SWIG_MODULE_CLIENTDATA_TYPE

SWIGRUNTIMEINLINE swig_type_info *
SWIG_TypeQuery(SWIG_MODULE_CLIENTDATA_TYPE clientdata, const char *name) {
  swig_module_info *module = SWIG_GetModule(clientdata);
  return SWIG_TypeQueryModule(module, module, name);
}

SWIGRUNTIMEINLINE swig_type_info *
SWIG_MangledTypeQuery(SWIG_MODULE_CLIENTDATA_TYPE clientdata, const char *name) {
  swig_module_info *module = SWIG_GetModule(clientdata);
  return SWIG_MangledTypeQueryModule(module, module, name);
}

#else

SWIGRUNTIMEINLINE swig_type_info *
SWIG_TypeQuery(const char *name) {
  swig_module_info *module = SWIG_GetModule(NULL);
  return SWIG_TypeQueryModule(module, module, name);
}

SWIGRUNTIMEINLINE swig_type_info *
SWIG_MangledTypeQuery(const char *name) {
  swig_module_info *module = SWIG_GetModule(NULL);
  return SWIG_MangledTypeQueryModule(module, module, name);
}

#endif
