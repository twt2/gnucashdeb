# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.10
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info as _swig_python_version_info
if _swig_python_version_info >= (2, 7, 0):
    def swig_import_helper():
        import importlib
        pkg = __name__.rpartition('.')[0]
        mname = '.'.join((pkg, '_sw_core_utils')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_sw_core_utils')
    _sw_core_utils = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_sw_core_utils', [dirname(__file__)])
        except ImportError:
            import _sw_core_utils
            return _sw_core_utils
        if fp is not None:
            try:
                _mod = imp.load_module('_sw_core_utils', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _sw_core_utils = swig_import_helper()
    del swig_import_helper
else:
    import _sw_core_utils
del _swig_python_version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.

try:
    import builtins as __builtin__
except ImportError:
    import __builtin__

def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr(self, class_type, name):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    raise AttributeError("'%s' object has no attribute '%s'" % (class_type.__name__, name))


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except __builtin__.Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except __builtin__.Exception:
    class _object:
        pass
    _newclass = 0


def gnc_environment_setup():
    return _sw_core_utils.gnc_environment_setup()
gnc_environment_setup = _sw_core_utils.gnc_environment_setup
GNC_PREFS_GROUP_GENERAL = _sw_core_utils.GNC_PREFS_GROUP_GENERAL
GNC_PREFS_GROUP_GENERAL_REGISTER = _sw_core_utils.GNC_PREFS_GROUP_GENERAL_REGISTER
GNC_PREFS_GROUP_GENERAL_REPORT = _sw_core_utils.GNC_PREFS_GROUP_GENERAL_REPORT
GNC_PREFS_GROUP_WARNINGS = _sw_core_utils.GNC_PREFS_GROUP_WARNINGS
GNC_PREFS_GROUP_WARNINGS_TEMP = _sw_core_utils.GNC_PREFS_GROUP_WARNINGS_TEMP
GNC_PREFS_GROUP_WARNINGS_PERM = _sw_core_utils.GNC_PREFS_GROUP_WARNINGS_PERM
GNC_PREFS_GROUP_ACCT_SUMMARY = _sw_core_utils.GNC_PREFS_GROUP_ACCT_SUMMARY
GNC_PREF_VERSION = _sw_core_utils.GNC_PREF_VERSION
GNC_PREF_SAVE_GEOMETRY = _sw_core_utils.GNC_PREF_SAVE_GEOMETRY
GNC_PREF_LAST_PATH = _sw_core_utils.GNC_PREF_LAST_PATH
GNC_PREF_USE_NEW = _sw_core_utils.GNC_PREF_USE_NEW
GNC_PREF_ACCOUNTING_LABELS = _sw_core_utils.GNC_PREF_ACCOUNTING_LABELS
GNC_PREF_ACCOUNT_SEPARATOR = _sw_core_utils.GNC_PREF_ACCOUNT_SEPARATOR
GNC_PREF_NEGATIVE_IN_RED = _sw_core_utils.GNC_PREF_NEGATIVE_IN_RED
GNC_PREF_NUM_SOURCE = _sw_core_utils.GNC_PREF_NUM_SOURCE
GNC_PREF_DATE_FORMAT = _sw_core_utils.GNC_PREF_DATE_FORMAT
GNC_PREF_DATE_COMPL_THISYEAR = _sw_core_utils.GNC_PREF_DATE_COMPL_THISYEAR
GNC_PREF_DATE_COMPL_SLIDING = _sw_core_utils.GNC_PREF_DATE_COMPL_SLIDING
GNC_PREF_DATE_BACKMONTHS = _sw_core_utils.GNC_PREF_DATE_BACKMONTHS
GNC_PREF_SHOW_LEAF_ACCT_NAMES = _sw_core_utils.GNC_PREF_SHOW_LEAF_ACCT_NAMES
GNC_PREF_ENTER_MOVES_TO_END = _sw_core_utils.GNC_PREF_ENTER_MOVES_TO_END
GNC_PREF_DRAW_HOR_LINES = _sw_core_utils.GNC_PREF_DRAW_HOR_LINES
GNC_PREF_DRAW_VERT_LINES = _sw_core_utils.GNC_PREF_DRAW_VERT_LINES
GNC_PREF_ALT_COLOR_BY_TRANS = _sw_core_utils.GNC_PREF_ALT_COLOR_BY_TRANS
GNC_PREF_USE_THEME_COLORS = _sw_core_utils.GNC_PREF_USE_THEME_COLORS
GNC_PREF_USE_GNUCASH_COLOR_THEME = _sw_core_utils.GNC_PREF_USE_GNUCASH_COLOR_THEME
GNC_PREF_TAB_TRANS_MEMORISED = _sw_core_utils.GNC_PREF_TAB_TRANS_MEMORISED
GNC_PREF_FUTURE_AFTER_BLANK = _sw_core_utils.GNC_PREF_FUTURE_AFTER_BLANK
GNC_PREF_START_CHOICE_ABS = _sw_core_utils.GNC_PREF_START_CHOICE_ABS
GNC_PREF_START_CHOICE_REL = _sw_core_utils.GNC_PREF_START_CHOICE_REL
GNC_PREF_START_DATE = _sw_core_utils.GNC_PREF_START_DATE
GNC_PREF_START_PERIOD = _sw_core_utils.GNC_PREF_START_PERIOD
GNC_PREF_END_CHOICE_ABS = _sw_core_utils.GNC_PREF_END_CHOICE_ABS
GNC_PREF_END_CHOICE_REL = _sw_core_utils.GNC_PREF_END_CHOICE_REL
GNC_PREF_END_DATE = _sw_core_utils.GNC_PREF_END_DATE
GNC_PREF_END_PERIOD = _sw_core_utils.GNC_PREF_END_PERIOD
GNC_PREF_CURRENCY_OTHER = _sw_core_utils.GNC_PREF_CURRENCY_OTHER
GNC_PREF_CURRENCY_CHOICE_LOCALE = _sw_core_utils.GNC_PREF_CURRENCY_CHOICE_LOCALE
GNC_PREF_CURRENCY_CHOICE_OTHER = _sw_core_utils.GNC_PREF_CURRENCY_CHOICE_OTHER

def gnc_prefs_get_namespace_regexp():
    return _sw_core_utils.gnc_prefs_get_namespace_regexp()
gnc_prefs_get_namespace_regexp = _sw_core_utils.gnc_prefs_get_namespace_regexp

def gnc_prefs_set_namespace_regexp(str):
    return _sw_core_utils.gnc_prefs_set_namespace_regexp(str)
gnc_prefs_set_namespace_regexp = _sw_core_utils.gnc_prefs_set_namespace_regexp

def gnc_prefs_is_debugging_enabled():
    return _sw_core_utils.gnc_prefs_is_debugging_enabled()
gnc_prefs_is_debugging_enabled = _sw_core_utils.gnc_prefs_is_debugging_enabled

def gnc_prefs_set_debugging(d):
    return _sw_core_utils.gnc_prefs_set_debugging(d)
gnc_prefs_set_debugging = _sw_core_utils.gnc_prefs_set_debugging

def gnc_prefs_is_extra_enabled():
    return _sw_core_utils.gnc_prefs_is_extra_enabled()
gnc_prefs_is_extra_enabled = _sw_core_utils.gnc_prefs_is_extra_enabled

def gnc_prefs_set_extra(enabled):
    return _sw_core_utils.gnc_prefs_set_extra(enabled)
gnc_prefs_set_extra = _sw_core_utils.gnc_prefs_set_extra

def gnc_prefs_get_file_save_compressed():
    return _sw_core_utils.gnc_prefs_get_file_save_compressed()
gnc_prefs_get_file_save_compressed = _sw_core_utils.gnc_prefs_get_file_save_compressed

def gnc_prefs_set_file_save_compressed(compressed):
    return _sw_core_utils.gnc_prefs_set_file_save_compressed(compressed)
gnc_prefs_set_file_save_compressed = _sw_core_utils.gnc_prefs_set_file_save_compressed

def gnc_prefs_get_file_retention_policy():
    return _sw_core_utils.gnc_prefs_get_file_retention_policy()
gnc_prefs_get_file_retention_policy = _sw_core_utils.gnc_prefs_get_file_retention_policy

def gnc_prefs_set_file_retention_policy(policy):
    return _sw_core_utils.gnc_prefs_set_file_retention_policy(policy)
gnc_prefs_set_file_retention_policy = _sw_core_utils.gnc_prefs_set_file_retention_policy

def gnc_prefs_get_file_retention_days():
    return _sw_core_utils.gnc_prefs_get_file_retention_days()
gnc_prefs_get_file_retention_days = _sw_core_utils.gnc_prefs_get_file_retention_days

def gnc_prefs_set_file_retention_days(days):
    return _sw_core_utils.gnc_prefs_set_file_retention_days(days)
gnc_prefs_set_file_retention_days = _sw_core_utils.gnc_prefs_set_file_retention_days

def gnc_prefs_get_long_version():
    return _sw_core_utils.gnc_prefs_get_long_version()
gnc_prefs_get_long_version = _sw_core_utils.gnc_prefs_get_long_version

def gnc_prefs_is_set_up():
    return _sw_core_utils.gnc_prefs_is_set_up()
gnc_prefs_is_set_up = _sw_core_utils.gnc_prefs_is_set_up

def gnc_prefs_register_cb(group, pref_name, func, user_data):
    return _sw_core_utils.gnc_prefs_register_cb(group, pref_name, func, user_data)
gnc_prefs_register_cb = _sw_core_utils.gnc_prefs_register_cb

def gnc_prefs_remove_cb_by_func(group, pref_name, func, user_data):
    return _sw_core_utils.gnc_prefs_remove_cb_by_func(group, pref_name, func, user_data)
gnc_prefs_remove_cb_by_func = _sw_core_utils.gnc_prefs_remove_cb_by_func

def gnc_prefs_remove_cb_by_id(group, id):
    return _sw_core_utils.gnc_prefs_remove_cb_by_id(group, id)
gnc_prefs_remove_cb_by_id = _sw_core_utils.gnc_prefs_remove_cb_by_id

def gnc_prefs_register_group_cb(group, func, user_data):
    return _sw_core_utils.gnc_prefs_register_group_cb(group, func, user_data)
gnc_prefs_register_group_cb = _sw_core_utils.gnc_prefs_register_group_cb

def gnc_prefs_remove_group_cb_by_func(group, func, user_data):
    return _sw_core_utils.gnc_prefs_remove_group_cb_by_func(group, func, user_data)
gnc_prefs_remove_group_cb_by_func = _sw_core_utils.gnc_prefs_remove_group_cb_by_func

def gnc_prefs_bind(group, pref_name, object, property):
    return _sw_core_utils.gnc_prefs_bind(group, pref_name, object, property)
gnc_prefs_bind = _sw_core_utils.gnc_prefs_bind

def gnc_prefs_get_bool(group, pref_name):
    return _sw_core_utils.gnc_prefs_get_bool(group, pref_name)
gnc_prefs_get_bool = _sw_core_utils.gnc_prefs_get_bool

def gnc_prefs_get_int(group, pref_name):
    return _sw_core_utils.gnc_prefs_get_int(group, pref_name)
gnc_prefs_get_int = _sw_core_utils.gnc_prefs_get_int

def gnc_prefs_get_int64(group, pref_name):
    return _sw_core_utils.gnc_prefs_get_int64(group, pref_name)
gnc_prefs_get_int64 = _sw_core_utils.gnc_prefs_get_int64

def gnc_prefs_get_float(group, pref_name):
    return _sw_core_utils.gnc_prefs_get_float(group, pref_name)
gnc_prefs_get_float = _sw_core_utils.gnc_prefs_get_float

def gnc_prefs_get_string(group, pref_name):
    return _sw_core_utils.gnc_prefs_get_string(group, pref_name)
gnc_prefs_get_string = _sw_core_utils.gnc_prefs_get_string

def gnc_prefs_get_enum(group, pref_name):
    return _sw_core_utils.gnc_prefs_get_enum(group, pref_name)
gnc_prefs_get_enum = _sw_core_utils.gnc_prefs_get_enum

def gnc_prefs_get_coords(group, pref_name, x, y):
    return _sw_core_utils.gnc_prefs_get_coords(group, pref_name, x, y)
gnc_prefs_get_coords = _sw_core_utils.gnc_prefs_get_coords

def gnc_prefs_get_value(group, pref_name):
    return _sw_core_utils.gnc_prefs_get_value(group, pref_name)
gnc_prefs_get_value = _sw_core_utils.gnc_prefs_get_value

def gnc_prefs_set_bool(group, pref_name, value):
    return _sw_core_utils.gnc_prefs_set_bool(group, pref_name, value)
gnc_prefs_set_bool = _sw_core_utils.gnc_prefs_set_bool

def gnc_prefs_set_int(group, pref_name, value):
    return _sw_core_utils.gnc_prefs_set_int(group, pref_name, value)
gnc_prefs_set_int = _sw_core_utils.gnc_prefs_set_int

def gnc_prefs_set_int64(group, pref_name, value):
    return _sw_core_utils.gnc_prefs_set_int64(group, pref_name, value)
gnc_prefs_set_int64 = _sw_core_utils.gnc_prefs_set_int64

def gnc_prefs_set_float(group, pref_name, value):
    return _sw_core_utils.gnc_prefs_set_float(group, pref_name, value)
gnc_prefs_set_float = _sw_core_utils.gnc_prefs_set_float

def gnc_prefs_set_string(group, pref_name, value):
    return _sw_core_utils.gnc_prefs_set_string(group, pref_name, value)
gnc_prefs_set_string = _sw_core_utils.gnc_prefs_set_string

def gnc_prefs_set_enum(group, pref_name, value):
    return _sw_core_utils.gnc_prefs_set_enum(group, pref_name, value)
gnc_prefs_set_enum = _sw_core_utils.gnc_prefs_set_enum

def gnc_prefs_set_coords(group, pref_name, x, y):
    return _sw_core_utils.gnc_prefs_set_coords(group, pref_name, x, y)
gnc_prefs_set_coords = _sw_core_utils.gnc_prefs_set_coords

def gnc_prefs_set_value(group, pref_name, value):
    return _sw_core_utils.gnc_prefs_set_value(group, pref_name, value)
gnc_prefs_set_value = _sw_core_utils.gnc_prefs_set_value

def gnc_prefs_reset(group, pref_name):
    return _sw_core_utils.gnc_prefs_reset(group, pref_name)
gnc_prefs_reset = _sw_core_utils.gnc_prefs_reset

def gnc_prefs_reset_group(group):
    return _sw_core_utils.gnc_prefs_reset_group(group)
gnc_prefs_reset_group = _sw_core_utils.gnc_prefs_reset_group

def gnc_version():
    return _sw_core_utils.gnc_version()
gnc_version = _sw_core_utils.gnc_version

def gnc_path_get_bindir():
    return _sw_core_utils.gnc_path_get_bindir()
gnc_path_get_bindir = _sw_core_utils.gnc_path_get_bindir

def gnc_path_get_stdreportsdir():
    return _sw_core_utils.gnc_path_get_stdreportsdir()
gnc_path_get_stdreportsdir = _sw_core_utils.gnc_path_get_stdreportsdir

def gnc_path_find_localized_html_file(arg1):
    return _sw_core_utils.gnc_path_find_localized_html_file(arg1)
gnc_path_find_localized_html_file = _sw_core_utils.gnc_path_find_localized_html_file

def gnc_build_userdata_path(arg1):
    return _sw_core_utils.gnc_build_userdata_path(arg1)
gnc_build_userdata_path = _sw_core_utils.gnc_build_userdata_path

def gnc_build_report_path(arg1):
    return _sw_core_utils.gnc_build_report_path(arg1)
gnc_build_report_path = _sw_core_utils.gnc_build_report_path

def gnc_build_stdreports_path(arg1):
    return _sw_core_utils.gnc_build_stdreports_path(arg1)
gnc_build_stdreports_path = _sw_core_utils.gnc_build_stdreports_path

def gnc_scm_log_warn(arg1):
    return _sw_core_utils.gnc_scm_log_warn(arg1)
gnc_scm_log_warn = _sw_core_utils.gnc_scm_log_warn

def gnc_scm_log_error(arg1):
    return _sw_core_utils.gnc_scm_log_error(arg1)
gnc_scm_log_error = _sw_core_utils.gnc_scm_log_error

def gnc_scm_log_msg(arg1):
    return _sw_core_utils.gnc_scm_log_msg(arg1)
gnc_scm_log_msg = _sw_core_utils.gnc_scm_log_msg

def gnc_scm_log_debug(arg1):
    return _sw_core_utils.gnc_scm_log_debug(arg1)
gnc_scm_log_debug = _sw_core_utils.gnc_scm_log_debug

def gnc_utf8_strip_invalid_strdup(arg1):
    return _sw_core_utils.gnc_utf8_strip_invalid_strdup(arg1)
gnc_utf8_strip_invalid_strdup = _sw_core_utils.gnc_utf8_strip_invalid_strdup

def gnc_locale_from_utf8(arg1):
    return _sw_core_utils.gnc_locale_from_utf8(arg1)
gnc_locale_from_utf8 = _sw_core_utils.gnc_locale_from_utf8

def gnc_locale_to_utf8(arg1):
    return _sw_core_utils.gnc_locale_to_utf8(arg1)
gnc_locale_to_utf8 = _sw_core_utils.gnc_locale_to_utf8

def gnc_locale_default_iso_currency_code():
    return _sw_core_utils.gnc_locale_default_iso_currency_code()
gnc_locale_default_iso_currency_code = _sw_core_utils.gnc_locale_default_iso_currency_code

def gnc_utf8_validate(arg1, arg2, arg3):
    return _sw_core_utils.gnc_utf8_validate(arg1, arg2, arg3)
gnc_utf8_validate = _sw_core_utils.gnc_utf8_validate
# This file is compatible with both classic and new-style classes.


