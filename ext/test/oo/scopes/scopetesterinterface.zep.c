
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Test_Oo_Scopes_ScopeTesterInterface) {

	ZEPHIR_REGISTER_INTERFACE(Test\\Oo\\Scopes, ScopeTesterInterface, test, oo_scopes_scopetesterinterface, test_oo_scopes_scopetesterinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Test_Oo_Scopes_ScopeTesterInterface, run);

