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
        mname = '.'.join((pkg, '_sw_app_utils')).lstrip('.')
        try:
            return importlib.import_module(mname)
        except ImportError:
            return importlib.import_module('_sw_app_utils')
    _sw_app_utils = swig_import_helper()
    del swig_import_helper
elif _swig_python_version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_sw_app_utils', [dirname(__file__)])
        except ImportError:
            import _sw_app_utils
            return _sw_app_utils
        if fp is not None:
            try:
                _mod = imp.load_module('_sw_app_utils', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _sw_app_utils = swig_import_helper()
    del swig_import_helper
else:
    import _sw_app_utils
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


def gnc_prefs_init():
    return _sw_app_utils.gnc_prefs_init()
gnc_prefs_init = _sw_app_utils.gnc_prefs_init

def gnc_get_current_book():
    return _sw_app_utils.gnc_get_current_book()
gnc_get_current_book = _sw_app_utils.gnc_get_current_book

def gnc_get_current_session():
    return _sw_app_utils.gnc_get_current_session()
gnc_get_current_session = _sw_app_utils.gnc_get_current_session

def gnc_get_current_book_tax_name():
    return _sw_app_utils.gnc_get_current_book_tax_name()
gnc_get_current_book_tax_name = _sw_app_utils.gnc_get_current_book_tax_name

def gnc_get_current_book_tax_type():
    return _sw_app_utils.gnc_get_current_book_tax_type()
gnc_get_current_book_tax_type = _sw_app_utils.gnc_get_current_book_tax_type

def gnc_get_current_root_account():
    return _sw_app_utils.gnc_get_current_root_account()
gnc_get_current_root_account = _sw_app_utils.gnc_get_current_root_account

def gnc_gettext_helper(string):
    return _sw_app_utils.gnc_gettext_helper(string)
gnc_gettext_helper = _sw_app_utils.gnc_gettext_helper

def gnc_option_db_new(guile_options):
    return _sw_app_utils.gnc_option_db_new(guile_options)
gnc_option_db_new = _sw_app_utils.gnc_option_db_new

def gnc_option_db_destroy(odb):
    return _sw_app_utils.gnc_option_db_destroy(odb)
gnc_option_db_destroy = _sw_app_utils.gnc_option_db_destroy

def gnc_option_db_set_option_selectable_by_name(guile_option, section, name, selectable):
    return _sw_app_utils.gnc_option_db_set_option_selectable_by_name(guile_option, section, name, selectable)
gnc_option_db_set_option_selectable_by_name = _sw_app_utils.gnc_option_db_set_option_selectable_by_name
# This file is compatible with both classic and new-style classes.


