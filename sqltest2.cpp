/*
 * Ejemplo de Comunicacion con MYSQL usando MariaDB
 * No compiles esto todavia porque no tienes instalado mysql 
 * ni las librerias que se necesitan
 */
#include <iostream>
#include <mysql/mysql.h>  
#include <string>

using namespace std;

// Mi clase proceso
class Proceso
{
  const char* MY_HOSTNAME;
  const char* MY_DATABASE;
  const char* MY_USERNAME;
  const char* MY_PASSWORD;
  const char* MY_SOCKET;
  enum {
    MY_PORT_NO = 3306,
    MY_OPT     = 0
  };
  MYSQL     *conexion;
  MYSQL_RES *resultado;
  MYSQL_ROW row;

  public:
  Proceso(); // Constructor default
  bool execMain();  // Proceso principal
};

// Constructor
Proceso::Proceso()
{
  // Initialize constants
  MY_HOSTNAME = "localhost";
  MY_DATABASE = "almacen_database";
  MY_USERNAME = "root";
  MY_PASSWORD = "clavedebasededatos";
  MY_SOCKET   = "/var/lib/mysql/mysql.sock";
}

// Proceso principal
bool Proceso::execMain()
{
  try {
    // Generar objeto MySQL 
    conexion = mysql_init(NULL);

    // Establecer una conexion con MySQL 
    if (!mysql_real_connect(
          conexion,
          MY_HOSTNAME, MY_USERNAME,
          MY_PASSWORD, MY_DATABASE,
          MY_PORT_NO, MY_SOCKET, MY_OPT)) {
      cerr << mysql_error(conexion) << endl;
      return false;
    }

    // Mostrar las tablas que hay (solo hay Camisas)
    if (mysql_query(conexion, "SHOW TABLES")) {
      cerr << mysql_error(conexion) << endl;
      return false;
    }

    // Generar un resultado
    resultado = mysql_use_result(conexion);

    // Capturar un set de resultado
    cout << "* MySQL - SHOW TABLES in `"
      << MY_DATABASE << "`" << endl;
    while ((row = mysql_fetch_row(resultado)) != NULL)
      cout << row[0] << endl;

    // Liberar Memoria
    mysql_free_result(resultado);

    // Cerrar la conexion a MySQL 
    mysql_close(conexion);
  } catch (char *e) {
    cerr << "[EXCEPTION] " << e << endl;
    return false;
  }
  return true;
}

// Ejecucion
int main(){
  try {
    Proceso objMain;
    bool bRet = objMain.execMain();
    if (!bRet) cout << "ERROR!" << endl;
  } catch (char *e) {
    cerr << "[EXCEPTION] " << e << endl;
    return 1;
  }
  return 0;
}
