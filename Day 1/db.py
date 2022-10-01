import mysql.connector

mydb = mysql.connector.connect(host='localhost',user='root',password='shruti',database='studentgrade')
print(mydb)

if mydb.is_connected():
        db_Info = mydb.get_server_info()
        print("Connected to MySQL Server version ", db_Info)
        cursor = mydb.cursor()
        cursor.execute("select database();")
        record = cursor.fetchone()
        print("You're connected to database: ", record)