/* Main.c generated by valac 0.36.15, the Vala compiler
 * generated from Main.vala, do not modify */

/*
* Copyright (C) 2018  Jaroslav Staněk <jaroslav-stanek@email.cz>
*/

#include <glib.h>
#include <glib-object.h>
#include <glib/gi18n-lib.h>
#include <stdio.h>
#include <gtk/gtk.h>
#include <granite.h>
#include <gobject/gvaluecollector.h>


#define TYPE_MAIN (main_get_type ())
#define MAIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN, Main))
#define MAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN, MainClass))
#define IS_MAIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN))
#define IS_MAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN))
#define MAIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN, MainClass))

typedef struct _Main Main;
typedef struct _MainClass MainClass;
typedef struct _MainPrivate MainPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_option_context_free0(var) ((var == NULL) ? NULL : (var = (g_option_context_free (var), NULL)))

#define APP_TESTS_TYPE_TESTING (app_tests_testing_get_type ())
#define APP_TESTS_TESTING(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_TESTS_TYPE_TESTING, AppTestsTesting))
#define APP_TESTS_TESTING_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_TESTS_TYPE_TESTING, AppTestsTestingClass))
#define APP_TESTS_IS_TESTING(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_TESTS_TYPE_TESTING))
#define APP_TESTS_IS_TESTING_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_TESTS_TYPE_TESTING))
#define APP_TESTS_TESTING_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_TESTS_TYPE_TESTING, AppTestsTestingClass))

typedef struct _AppTestsTesting AppTestsTesting;
typedef struct _AppTestsTestingClass AppTestsTestingClass;
typedef struct _Block2Data Block2Data;
#define _app_tests_testing_unref0(var) ((var == NULL) ? NULL : (var = (app_tests_testing_unref (var), NULL)))

#define APP_TYPE_APPLICATION (app_application_get_type ())
#define APP_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_TYPE_APPLICATION, AppApplication))
#define APP_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_TYPE_APPLICATION, AppApplicationClass))
#define APP_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_TYPE_APPLICATION))
#define APP_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_TYPE_APPLICATION))
#define APP_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_TYPE_APPLICATION, AppApplicationClass))

typedef struct _AppApplication AppApplication;
typedef struct _AppApplicationClass AppApplicationClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _ParamSpecMain ParamSpecMain;

struct _Main {
	GTypeInstance parent_instance;
	volatile int ref_count;
	MainPrivate * priv;
};

struct _MainClass {
	GTypeClass parent_class;
	void (*finalize) (Main *self);
};

struct _Block2Data {
	int _ref_count_;
	AppTestsTesting* testing;
};

struct _ParamSpecMain {
	GParamSpec parent_instance;
};


static gpointer main_parent_class = NULL;
static gboolean main_testing;
static gboolean main_testing = FALSE;
static gboolean main_version;
static gboolean main_version = FALSE;

gpointer main_ref (gpointer instance);
void main_unref (gpointer instance);
GParamSpec* param_spec_main (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_main (GValue* value, gpointer v_object);
void value_take_main (GValue* value, gpointer v_object);
gpointer value_get_main (const GValue* value);
GType main_get_type (void) G_GNUC_CONST;
enum  {
	MAIN_0_PROPERTY
};
gint main_main (gchar** args, int args_length1);
#define APP_CONFIGS_CONSTANTS_PROGRAME_NAME "Prettifier"
#define APP_CONFIGS_CONSTANTS_VERSION "1.0.0"
gpointer app_tests_testing_ref (gpointer instance);
void app_tests_testing_unref (gpointer instance);
GParamSpec* app_tests_param_spec_testing (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void app_tests_value_set_testing (GValue* value, gpointer v_object);
void app_tests_value_take_testing (GValue* value, gpointer v_object);
gpointer app_tests_value_get_testing (const GValue* value);
GType app_tests_testing_get_type (void) G_GNUC_CONST;
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void block2_data_unref (void * _userdata_);
AppTestsTesting* app_tests_testing_new (gchar** args, int args_length1);
AppTestsTesting* app_tests_testing_construct (GType object_type, gchar** args, int args_length1);
static gboolean ___lambda12_ (Block2Data* _data2_);
void app_tests_testing_run (AppTestsTesting* self);
static gboolean ____lambda12__gsource_func (gpointer self);
GType app_application_get_type (void) G_GNUC_CONST;
AppApplication* app_application_new (void);
AppApplication* app_application_construct (GType object_type);
Main* main_new (void);
Main* main_construct (GType object_type);
static void main_finalize (Main * obj);

static const GOptionEntry MAIN_options[3] = {{"version", (gchar) 0, 0, G_OPTION_ARG_NONE, &main_version, "Display Version Number", NULL}, {"run-tests", (gchar) 0, 0, G_OPTION_ARG_NONE, &main_testing, "Run testing", NULL}, {NULL}};

/**
     * Main method. Responsible for starting the {@code Application} class.
     *
     * @see App.Application
     * @return {@code int}
     * @since 1.0.0
     */
static Block2Data* block2_data_ref (Block2Data* _data2_) {
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_atomic_int_inc (&_data2_->_ref_count_);
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return _data2_;
#line 131 "Main.c"
}


static void block2_data_unref (void * _userdata_) {
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_app_tests_testing_unref0 (_data2_->testing);
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_slice_free (Block2Data, _data2_);
#line 144 "Main.c"
	}
}


static gboolean ___lambda12_ (Block2Data* _data2_) {
	gboolean result = FALSE;
	AppTestsTesting* _tmp0_;
#line 41 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_tmp0_ = _data2_->testing;
#line 41 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	app_tests_testing_run (_tmp0_);
#line 42 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	gtk_main_quit ();
#line 44 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	result = FALSE;
#line 44 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return result;
#line 162 "Main.c"
}


static gboolean ____lambda12__gsource_func (gpointer self) {
	gboolean result;
	result = ___lambda12_ (self);
#line 40 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return result;
#line 171 "Main.c"
}


gint main_main (gchar** args, int args_length1) {
	gint result = 0;
	GOptionContext* options_context = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	GOptionContext* _tmp2_;
	GOptionContext* _tmp3_;
	gboolean _tmp5_;
	gboolean _tmp7_;
	GError * _inner_error_ = NULL;
#line 23 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_tmp0_ = g_strconcat (APP_CONFIGS_CONSTANTS_PROGRAME_NAME " ", _ ("Options"), NULL);
#line 23 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_tmp1_ = _tmp0_;
#line 23 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_tmp2_ = g_option_context_new (_tmp1_);
#line 23 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_tmp3_ = _tmp2_;
#line 23 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_g_free0 (_tmp1_);
#line 23 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	options_context = _tmp3_;
#line 24 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_option_context_set_help_enabled (options_context, TRUE);
#line 25 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_option_context_add_main_entries (options_context, MAIN_options, NULL);
#line 201 "Main.c"
	{
#line 28 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_option_context_parse (options_context, &args_length1, &args, &_inner_error_);
#line 28 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 207 "Main.c"
			goto __catch1_g_error;
		}
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* _error_ = NULL;
#line 27 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_error_ = _inner_error_;
#line 27 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_inner_error_ = NULL;
#line 27 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_g_error_free0 (_error_);
#line 221 "Main.c"
	}
	__finally1:
#line 27 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 226 "Main.c"
		gint _tmp4_ = 0;
#line 27 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_g_option_context_free0 (options_context);
#line 27 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 27 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_clear_error (&_inner_error_);
#line 27 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		return _tmp4_;
#line 236 "Main.c"
	}
#line 32 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_tmp5_ = main_version;
#line 32 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (_tmp5_) {
#line 242 "Main.c"
		FILE* _tmp6_;
#line 33 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_tmp6_ = stdout;
#line 33 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		fprintf (_tmp6_, "%s", APP_CONFIGS_CONSTANTS_PROGRAME_NAME " " APP_CONFIGS_CONSTANTS_VERSION "\r\n");
#line 34 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		result = 0;
#line 34 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_g_option_context_free0 (options_context);
#line 34 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		return result;
#line 254 "Main.c"
	}
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_tmp7_ = main_testing;
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (_tmp7_) {
#line 260 "Main.c"
		Block2Data* _data2_;
		gchar** _tmp8_;
		gint _tmp8__length1;
		AppTestsTesting* _tmp9_;
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_data2_ = g_slice_new0 (Block2Data);
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_data2_->_ref_count_ = 1;
#line 38 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		gtk_init (&args_length1, &args);
#line 39 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_tmp8_ = args;
#line 39 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_tmp8__length1 = args_length1;
#line 39 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_tmp9_ = app_tests_testing_new (_tmp8_, _tmp8__length1);
#line 39 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_data2_->testing = _tmp9_;
#line 40 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, ____lambda12__gsource_func, block2_data_ref (_data2_), block2_data_unref);
#line 47 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		gtk_main ();
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		block2_data_unref (_data2_);
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_data2_ = NULL;
#line 287 "Main.c"
	} else {
		AppApplication* app = NULL;
		AppApplication* _tmp10_;
		AppApplication* _tmp11_;
		gchar** _tmp12_;
		gint _tmp12__length1;
#line 50 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_tmp10_ = app_application_new ();
#line 50 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		app = _tmp10_;
#line 51 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_tmp11_ = app;
#line 51 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_tmp12_ = args;
#line 51 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_tmp12__length1 = args_length1;
#line 51 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		granite_application_run ((GraniteApplication*) _tmp11_, _tmp12_, _tmp12__length1);
#line 37 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		_g_object_unref0 (app);
#line 308 "Main.c"
	}
#line 54 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	result = 0;
#line 54 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	_g_option_context_free0 (options_context);
#line 54 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return result;
#line 316 "Main.c"
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
#line 22 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return main_main (argv, argc);
#line 326 "Main.c"
}


Main* main_construct (GType object_type) {
	Main* self = NULL;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	self = (Main*) g_type_create_instance (object_type);
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return self;
#line 336 "Main.c"
}


Main* main_new (void) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return main_construct (TYPE_MAIN);
#line 343 "Main.c"
}


static void value_main_init (GValue* value) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	value->data[0].v_pointer = NULL;
#line 350 "Main.c"
}


static void value_main_free_value (GValue* value) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (value->data[0].v_pointer) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		main_unref (value->data[0].v_pointer);
#line 359 "Main.c"
	}
}


static void value_main_copy_value (const GValue* src_value, GValue* dest_value) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (src_value->data[0].v_pointer) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		dest_value->data[0].v_pointer = main_ref (src_value->data[0].v_pointer);
#line 369 "Main.c"
	} else {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		dest_value->data[0].v_pointer = NULL;
#line 373 "Main.c"
	}
}


static gpointer value_main_peek_pointer (const GValue* value) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return value->data[0].v_pointer;
#line 381 "Main.c"
}


static gchar* value_main_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (collect_values[0].v_pointer) {
#line 388 "Main.c"
		Main * object;
		object = collect_values[0].v_pointer;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		if (object->parent_instance.g_class == NULL) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 395 "Main.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 399 "Main.c"
		}
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		value->data[0].v_pointer = main_ref (object);
#line 403 "Main.c"
	} else {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		value->data[0].v_pointer = NULL;
#line 407 "Main.c"
	}
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return NULL;
#line 411 "Main.c"
}


static gchar* value_main_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	Main ** object_p;
	object_p = collect_values[0].v_pointer;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (!object_p) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 422 "Main.c"
	}
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (!value->data[0].v_pointer) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		*object_p = NULL;
#line 428 "Main.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		*object_p = value->data[0].v_pointer;
#line 432 "Main.c"
	} else {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		*object_p = main_ref (value->data[0].v_pointer);
#line 436 "Main.c"
	}
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return NULL;
#line 440 "Main.c"
}


GParamSpec* param_spec_main (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecMain* spec;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_MAIN), NULL);
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return G_PARAM_SPEC (spec);
#line 454 "Main.c"
}


gpointer value_get_main (const GValue* value) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_MAIN), NULL);
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return value->data[0].v_pointer;
#line 463 "Main.c"
}


void value_set_main (GValue* value, gpointer v_object) {
	Main * old;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_MAIN));
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	old = value->data[0].v_pointer;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (v_object) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_MAIN));
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		value->data[0].v_pointer = v_object;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		main_ref (value->data[0].v_pointer);
#line 483 "Main.c"
	} else {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		value->data[0].v_pointer = NULL;
#line 487 "Main.c"
	}
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (old) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		main_unref (old);
#line 493 "Main.c"
	}
}


void value_take_main (GValue* value, gpointer v_object) {
	Main * old;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_MAIN));
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	old = value->data[0].v_pointer;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (v_object) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_MAIN));
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		value->data[0].v_pointer = v_object;
#line 512 "Main.c"
	} else {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		value->data[0].v_pointer = NULL;
#line 516 "Main.c"
	}
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (old) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		main_unref (old);
#line 522 "Main.c"
	}
}


static void main_class_init (MainClass * klass) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	main_parent_class = g_type_class_peek_parent (klass);
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	((MainClass *) klass)->finalize = main_finalize;
#line 532 "Main.c"
}


static void main_instance_init (Main * self) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	self->ref_count = 1;
#line 539 "Main.c"
}


static void main_finalize (Main * obj) {
	Main * self;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_MAIN, Main);
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_signal_handlers_destroy (self);
#line 549 "Main.c"
}


GType main_get_type (void) {
	static volatile gsize main_type_id__volatile = 0;
	if (g_once_init_enter (&main_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_main_init, value_main_free_value, value_main_copy_value, value_main_peek_pointer, "p", value_main_collect_value, "p", value_main_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (MainClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) main_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Main), 0, (GInstanceInitFunc) main_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType main_type_id;
		main_type_id = g_type_register_fundamental (g_type_fundamental_next (), "Main", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&main_type_id__volatile, main_type_id);
	}
	return main_type_id__volatile;
}


gpointer main_ref (gpointer instance) {
	Main * self;
	self = instance;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	g_atomic_int_inc (&self->ref_count);
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	return instance;
#line 574 "Main.c"
}


void main_unref (gpointer instance) {
	Main * self;
	self = instance;
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		MAIN_GET_CLASS (self)->finalize (self);
#line 5 "/home/jaroslav/Projects/elementaryOS/prettifier/src/Main.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 587 "Main.c"
	}
}



