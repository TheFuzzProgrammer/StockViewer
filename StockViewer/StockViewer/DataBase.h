#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class DataBase
{
private:
	String^ connection; // A string that must contain the database connection info
	MySqlConnection^ database_connector; //The connector for the database
public:
	DataBase(String^);
	DataTable^ get_data(String^);
	void open_session();
	void close_session();

};
