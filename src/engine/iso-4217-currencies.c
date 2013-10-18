
  {
    const char *fullname = "Andorran Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ADF",
                                         "950",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Andorran Peseta";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ADP",
                                         "724",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "UAE Dirham";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AED",
                                         "784",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Afghani";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AFA",
                                         "004",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Afghani";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AFN",
                                         "971",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Lek";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ALL",
                                         "008",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Armenian Dram";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AMD",
                                         "051",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Netherlands Antillian Guilder";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ANG",
                                         "532",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kwanza";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AOA",
                                         "973",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Angola New Kwanza";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AON",
                                         "024",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Angola Kwanza Reajustado";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AOR",
                                         "982",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Argentine Austral";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ARA",
                                         "XXX",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Argentine Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ARS",
                                         "032",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Austrian Schilling";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ATS",
                                         "040",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Australian Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AUD",
                                         "036",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Aruban Guilder";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AWG",
                                         "533",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Azerbaijanian Manat";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AZM",
                                         "031",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Azerbaijanian Manat";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "AZN",
                                         "944",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Bosnia and Herzegovina Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BAD",
                                         "070",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Convertible Marks";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BAM",
                                         "977",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Barbados Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BBD",
                                         "052",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Taka";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BDT",
                                         "050",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Belgian Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BEF",
                                         "056",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Bulgarian Lev A/99";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BGL",
                                         "100",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Bulgarian Lev";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BGN",
                                         "975",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Bahraini Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BHD",
                                         "048",
                                         1000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Burundi Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BIF",
                                         "108",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Bermudian Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BMD",
                                         "060",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Brunei Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BND",
                                         "096",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Boliviano";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BOB",
                                         "068",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Mvdol";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BOV",
                                         "984",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Brazilian Cruzeiro";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BRE",
                                         "076",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Brazilian Real";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BRL",
                                         "986",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Brazilian Cruzeiro Real";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BRR",
                                         "987",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Bahamian Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BSD",
                                         "044",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Ngultrum";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BTN",
                                         "064",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Pula";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BWP",
                                         "072",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Belarussian Rouble";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BYB",
                                         "",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Belarussian Ruble";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BYR",
                                         "974",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Belize Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "BZD",
                                         "084",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Canadian Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CAD",
                                         "124",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Franc Congolais";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CDF",
                                         "976",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "WIR Euro";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CHE",
                                         "974",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Swiss Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CHF",
                                         "756",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "WIR Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CHW",
                                         "948",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Unidades de fomento";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CLF",
                                         "990",
                                         10000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Chilean Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CLP",
                                         "152",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Yuan Renminbi";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CNY",
                                         "156",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Colombian Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "COP",
                                         "170",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Unidad de Valor Real";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "COU",
                                         "970",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Costa Rican Colon";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CRC",
                                         "188",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Cuban Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CUP",
                                         "192",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Cuban Convertible Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CUC",
                                         "931",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Cape Verde Escudo";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CVE",
                                         "132",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Cyprus Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CYP",
                                         "196",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Czech Koruna";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "CZK",
                                         "203",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Deutsche Mark";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "DEM",
                                         "280",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Djibouti Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "DJF",
                                         "262",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Danish Krone";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "DKK",
                                         "208",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Dominican Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "DOP",
                                         "214",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Algerian Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "DZD",
                                         "012",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Ecuador Sucre";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ECS",
                                         "218",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kroon";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "EEK",
                                         "233",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Egyptian Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "EGP",
                                         "818",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Nakfa";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ERN",
                                         "232",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Spanish Peseta";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ESP",
                                         "724",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Ethiopian Birr";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ETB",
                                         "230",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Euro";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "EUR",
                                         "978",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Finnish Markka";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "FIM",
                                         "246",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Fiji Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "FJD",
                                         "242",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Falkland Islands Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "FKP",
                                         "238",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "French Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "FRF",
                                         "250",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Pound Sterling";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GBP",
                                         "826",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Lari";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GEL",
                                         "981",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Cedi";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GHC",
                                         "288",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Ghana Cedi";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GHS",
                                         "936",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Gibraltar Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GIP",
                                         "292",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Dalasi";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GMD",
                                         "270",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Guinea Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GNF",
                                         "324",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Greek Drachma";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GRD",
                                         "200",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Quetzal";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GTQ",
                                         "320",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Guinea-Bissau Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GWP",
                                         "624",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Guyana Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "GYD",
                                         "328",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Hong Kong Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "HKD",
                                         "344",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Lempira";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "HNL",
                                         "340",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Croatian Kuna";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "HRK",
                                         "191",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Gourde";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "HTG",
                                         "332",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Forint";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "HUF",
                                         "348",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Rupiah";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "IDR",
                                         "360",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Irish Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "IEP",
                                         "372",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "New Israeli Sheqel";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ILS",
                                         "376",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Indian Rupee";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "INR",
                                         "356",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Iraqi Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "IQD",
                                         "368",
                                         1000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Iranian Rial";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "IRR",
                                         "364",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Iceland Krona";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ISK",
                                         "352",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Italian Lira";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ITL",
                                         "380",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Jamaican Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "JMD",
                                         "388",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Jordanian Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "JOD",
                                         "400",
                                         1000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Yen";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "JPY",
                                         "392",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kenyan Shilling";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KES",
                                         "404",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Som";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KGS",
                                         "417",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Riel";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KHR",
                                         "116",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Comoro Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KMF",
                                         "174",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "North Korean Won";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KPW",
                                         "408",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Won";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KRW",
                                         "410",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kuwaiti Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KWD",
                                         "414",
                                         1000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Cayman Islands Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KYD",
                                         "136",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Tenge";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "KZT",
                                         "398",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kip";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LAK",
                                         "418",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Lebanese Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LBP",
                                         "422",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Sri Lanka Rupee";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LKR",
                                         "144",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Liberian Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LRD",
                                         "430",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Loti";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LSL",
                                         "426",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Lithuanian Litas";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LTL",
                                         "440",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Luxembourg Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LUF",
                                         "442",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Latvian Lats";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LVL",
                                         "428",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Libyan Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "LYD",
                                         "434",
                                         1000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Moroccan Dirham";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MAD",
                                         "504",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Moldovan Leu";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MDL",
                                         "498",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Malagasy Ariary";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MGA",
                                         "969",
                                         5);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Malagasy Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MGF",
                                         "450",
                                         500);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Denar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MKD",
                                         "807",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Mali Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MLF",
                                         "466",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kyat";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MMK",
                                         "104",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Tugrik";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MNT",
                                         "496",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Pataca";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MOP",
                                         "446",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Ouguiya";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MRO",
                                         "478",
                                         5);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Maltese Lira";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MTL",
                                         "470",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Mauritius Rupee";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MUR",
                                         "480",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Rufiyaa";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MVR",
                                         "462",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kwacha";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MWK",
                                         "454",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Mexican Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MXN",
                                         "484",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Mexican Unidad de Inversion (UDI)";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MXV",
                                         "979",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Malaysian Ringgit";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MYR",
                                         "458",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Mozambique Metical";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MZM",
                                         "508",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Metical";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "MZN",
                                         "943",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Namibia Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "NAD",
                                         "516",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Naira";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "NGN",
                                         "566",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Nicaraguan Cordoba";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "NIC",
                                         "558",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Cordoba Oro";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "NIO",
                                         "558",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Netherlands Guilder";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "NLG",
                                         "528",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Norwegian Krone";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "NOK",
                                         "578",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Nepalese Rupee";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "NPR",
                                         "524",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "New Zealand Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "NZD",
                                         "554",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Rial Omani";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "OMR",
                                         "512",
                                         1000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Balboa";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "PAB",
                                         "590",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Nuevo Sol";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "PEN",
                                         "604",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kina";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "PGK",
                                         "598",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Philippine Peso";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "PHP",
                                         "608",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Pakistan Rupee";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "PKR",
                                         "586",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Zloty";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "PLN",
                                         "985",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Portuguese Escudo";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "PTE",
                                         "620",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Guarani";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "PYG",
                                         "600",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Qatari Rial";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "QAR",
                                         "634",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Romanian Old Leu";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ROL",
                                         "642",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "New Leu";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "RON",
                                         "946",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Serbian Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "RSD",
                                         "941",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Russian Rouble";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "RUB",
                                         "643",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Rwanda Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "RWF",
                                         "646",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Saudi Riyal";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SAR",
                                         "682",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Solomon Islands Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SBD",
                                         "090",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Seychelles Rupee";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SCR",
                                         "690",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Sudanese Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SDD",
                                         "736",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Sudanese Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SDG",
                                         "938",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Sudanese Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SDP",
                                         "736",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Swedish Krona";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SEK",
                                         "752",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Singapore Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SGD",
                                         "702",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Saint Helena Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SHP",
                                         "654",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Slovenian Tolar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SIT",
                                         "705",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Slovak Koruna";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SKK",
                                         "703",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Leone";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SLL",
                                         "694",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Somali Shilling";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SOS",
                                         "706",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Surinam Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SRD",
                                         "968",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Suriname Guilder";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SRG",
                                         "740",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Dobra";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "STD",
                                         "678",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "El Salvador Colon";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SVC",
                                         "222",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Syrian Pound";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SYP",
                                         "760",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Lilangeni";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "SZL",
                                         "748",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Baht";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "THB",
                                         "764",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Tajik Rouble";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TJR",
                                         "762",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Somoni";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TJS",
                                         "972",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Manat";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TMM",
                                         "795",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Manat";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TMT",
                                         "934",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Tunisian Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TND",
                                         "788",
                                         1000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Pa'anga";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TOP",
                                         "776",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Turkish Lira";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TRY",
                                         "949",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Trinidad and Tobago Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TTD",
                                         "780",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "New Taiwan Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TWD",
                                         "901",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Tanzanian Shilling";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "TZS",
                                         "834",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Hryvnia";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "UAH",
                                         "980",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Uganda Shilling";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "UGX",
                                         "800",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "US Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "USD",
                                         "840",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "US Dollar (Next day)";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "USN",
                                         "997",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "US Dollar (Same day)";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "USS",
                                         "998",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Uruguay Peso en Unidades Indexadas";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "UYI",
                                         "940",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Peso Uruguayo";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "UYU",
                                         "858",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Uzbekistan Sum";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "UZS",
                                         "860",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Venezuela Bolívar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "VEB",
                                         "862",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Bolivar Fuerte";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "VEF",
                                         "937",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Dong";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "VND",
                                         "704",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Vatu";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "VUV",
                                         "548",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Tala";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "WST",
                                         "882",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Yemeni Rial";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "YER",
                                         "886",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Yugoslavian Dinar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "YUM",
                                         "890",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Rand";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ZAR",
                                         "710",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Kwacha (old)";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ZMK",
                                         "894",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Zambian Kwacha";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ZMW",
                                         "967",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Zimbabwe Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ZWD",
                                         "716",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Zimbabwe Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "ZWL",
                                         "716",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "CFA Franc BEAC";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XAF",
                                         "950",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "East Caribbean Dollar";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XCD",
                                         "951",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "SDR";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XDR",
                                         "960",
                                         1);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Gold-Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XFO",
                                         "nil",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "UIC-Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XFU",
                                         "nil",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "CFA Franc BCEAO";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XOF",
                                         "952",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "CFP Franc";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XPF",
                                         "953",
                                         100);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Code for testing purposes";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XTS",
                                         "963",
                                         1000000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "No currency";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XXX",
                                         "999",
                                         1000000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Silver";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XAG",
                                         "961",
                                         1000000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Gold";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XAU",
                                         "959",
                                         1000000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Palladium";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XPD",
                                         "964",
                                         1000000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }

  {
    const char *fullname = "Platinum";
    gnc_commodity *c = gnc_commodity_new(book,
					 CUR_I18N(fullname),
                                         "ISO4217",
                                         "XPT",
                                         "962",
                                         1000000);

    if(!c) {
      PWARN("failed to create commodity for currency %s", fullname);
    } else {
      if(!gnc_commodity_table_insert(table, c)) {
        PWARN("failed to insert %s into commodity table", fullname);
      }
    }
  }
