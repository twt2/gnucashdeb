
/********************************************************************\
 * gnc-warnings.c -- overview of warning messages that can be       *
 *                  displayed to the user always or once.           *
 *                                                                  *
 * ATTENTION: this file is autogenerated based on the gsettings     *
 *            schema file org.gnucash.warnings.gschema.xml.in       *
 *                                                                  *
 * If you need any modifications in this file, please update the    *
 * schema source file (or the xsl translation file depending on the *
 * kind of change required) instead.                                *
 *                                                                  *
 * Copyright (C) 2013 Geert Janssens <geert@kobaltwit.be>           *
 *                                                                  *
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


#include <gnc-warnings.h>

static GncWarningSpec warning_spec [] =
{
  { GNC_PREF_WARN_CHECKPRINTING_MULTI_ACCT,
    "Print checks from multiple accounts",
    "This dialog is presented if you try to print checks from multiple accounts at the same time.",
  },
  { GNC_PREF_WARN_INV_ENTRY_MOD,
    "Commit changes to a invoice entry",
    "This dialog is presented when you attempt to move out of a modified invoice entry. The changed data must be either saved or discarded.",
  },
  { GNC_PREF_WARN_INV_ENTRY_DUP,
    "Duplicating a changed invoice entry",
    "This dialog is presented when you attempt to duplicate a modified invoice entry. The changed data must be saved or the duplication canceled.",
  },
  { GNC_PREF_WARN_PRICE_COMM_DEL,
    "Delete a commodity",
    "This dialog is presented before allowing you to delete a commodity.",
  },
  { GNC_PREF_WARN_PRICE_COMM_DEL_QUOTES,
    "Delete a commodity with price quotes",
    "This dialog is presented before allowing you to delete a commodity that has price quotes attached. Deleting the commodity will delete the quotes as well.",
  },
  { GNC_PREF_WARN_PRICE_QUOTES_DEL,
    "Delete multiple price quotes",
    "This dialog is presented before allowing you to delete multiple price quotes at one time.",
  },
  { GNC_PREF_WARN_REG_IS_ACCT_PAY_REC,
    "Edit account payable/accounts receivable register",
    "This dialog is presented before allowing you to edit an accounts payable/accounts receivable account. These account types are reserved for the business features and should rarely be manipulated manually.",
  },
  { GNC_PREF_WARN_REG_IS_READ_ONLY,
    "Read only register",
    "This dialog is presented when a read-only register is opened.",
  },
  { GNC_PREF_WARN_REG_RECD_SPLIT_MOD,
    "Change contents of reconciled split",
    "This dialog is presented before allowing you to change the contents of a reconciled split. Allowing these changes can make it hard to perform future reconciliations.",
  },
  { GNC_PREF_WARN_REG_RECD_SPLIT_UNREC,
    "Mark transaction split as unreconciled",
    "This dialog is presented before allowing you to mark a transaction split as unreconciled. Doing so will throw off the reconciled value of the register and can make it hard to perform future reconciliations.",
  },
  { GNC_PREF_WARN_REG_SPLIT_DEL,
    "Remove a split from a transaction",
    "This dialog is presented before allowing you to remove a split from a transaction.",
  },
  { GNC_PREF_WARN_REG_SPLIT_DEL_RECD,
    "Remove a reconciled split from a transaction",
    "This dialog is presented before allowing you to remove a reconciled split from a transaction. Doing so will throw off the reconciled value of the register and can make it hard to perform future reconciliations.",
  },
  { GNC_PREF_WARN_REG_SPLIT_DEL_ALL,
    "Remove all the splits from a transaction",
    "This dialog is presented before allowing you to remove all splits from a transaction.",
  },
  { GNC_PREF_WARN_REG_SPLIT_DEL_ALL_RECD,
    "Remove all the splits from a transaction",
    "This dialog is presented before allowing you to remove all splits (including some reconciled splits) from a transaction. Doing so will throw off the reconciled value of the register and can make it hard to perform future reconciliations.",
  },
  { GNC_PREF_WARN_REG_TRANS_DEL,
    "Delete a transaction",
    "This dialog is presented before allowing you to delete a transaction.",
  },
  { GNC_PREF_WARN_REG_TRANS_DEL_RECD,
    "Delete a transaction with reconciled splits",
    "This dialog is presented before allowing you to delete a transaction that contains reconciled splits. Doing so will throw off the reconciled value of the register and can make it hard to perform future reconciliations.",
  },
  { GNC_PREF_WARN_REG_TRANS_DUP,
    "Duplicating a changed transaction",
    "This dialog is presented when you attempt to duplicate a modified transaction. The changed data must be saved or the duplication canceled.",
  },
  { GNC_PREF_WARN_REG_TRANS_MOD,
    "Commit changes to a transaction",
    "This dialog is presented when you attempt to move out of a modified transaction. The changed data must be either saved or discarded.",
  },
  { NULL }
};

const GncWarningSpec *gnc_get_warnings (void)
{
    return warning_spec;
}
