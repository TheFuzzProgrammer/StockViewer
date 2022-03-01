#include "DataBase.h"

DataBase::DataBase(String^ _connection) 
{
	this->connection = _connection; //localhost db
	this->database_connector = gcnew MySqlConnection(this->connection); 
}

void DataBase::open_session() {
	this->database_connector->Open(); //open the db connection
}

void DataBase::close_session() {
	this->database_connector->Close(); //closes the db connection
}

DataTable^ DataBase::get_data(String^ _query) {
	String^ sql_query = _query; //Your Query
	MySqlCommand^ command = gcnew MySqlCommand(sql_query, this->database_connector); 
	MySqlDataAdapter^ data_adapter = gcnew MySqlDataAdapter(command); 
	DataTable^ table = gcnew DataTable();
	data_adapter->Fill(table);
	
	return table;
}