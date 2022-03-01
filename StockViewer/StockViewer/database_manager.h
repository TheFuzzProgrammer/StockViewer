#pragma once

using namespace System;
using namespace std;

String^ get_query(String^ _document) {
	//"datasource=localhost; username=root; password=""; database=svlocal;"
	//"select * from users ";
	String^ query = "SELECT * FROM users WHERE Document = '" + _document + "'";
	return query;
}