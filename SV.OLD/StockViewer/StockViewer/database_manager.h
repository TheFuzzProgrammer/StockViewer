#pragma once
#include "DataBase.h"
using namespace System;
using namespace std;

String^ get_query_users(String^ _document) {
	//"datasource=localhost; username=root; password=""; database=svlocal;"
	//"select * from users ";
	String^ query = "SELECT * FROM users WHERE Document = '" + _document + "'";
	return query;
}

String^ get_query_products(String^ _code) {
	String^ query = "select * from svlocal.products where code = '" +_code + "'";
	return query;
}