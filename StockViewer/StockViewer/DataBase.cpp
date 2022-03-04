#include "DataBase.h"

using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

DataBase::DataBase(String^ _connection) 
{
	this->connection = _connection; //localhost db
	this->database_connector = gcnew MySqlConnection(this->connection); 
}

void DataBase::open_session() {
	try {
		this->database_connector->Open(); //open the db connection
	}
	catch(Exception^ db_exception) {
		MessageBox::Show("Database critical error");
	}
}

void DataBase::close_session() {
	this->database_connector->Close(); //closes the db connection
}

DataTable^ DataBase::get_data(String^ _query) {
	String^ sql_query = _query; //Your Query
	MySqlCommand^ command = gcnew MySqlCommand(sql_query, this->database_connector); 
	MySqlDataAdapter^ data_adapter = gcnew MySqlDataAdapter(command); 
	DataTable^ table;
	try {
		table = gcnew DataTable();
		data_adapter->Fill(table);
	}
	catch (Exception^ db_exception) {
		MessageBox::Show("Could not connect to database. \nMake shure it's enabled an running");
	}
	return table;
}

String^ DataBase::dump_to_database(String^ db, String^ _query){
	String^ query = "insert into " + db + " values (" + _query + ")";
	MySqlCommand^ command = gcnew MySqlCommand(query, this->database_connector);
	try {
		command->ExecuteNonQuery();
		return "Done!";
	}
	catch (Exception^ db_exception)
	{
		MessageBox::Show(db_exception->Message);
		return query;
	}
}