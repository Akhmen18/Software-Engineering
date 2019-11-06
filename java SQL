package javaapplication2;
import java.sql.*;
public class JavaApplication2 {
     public static void main(String []args){
        
        try{
            //Loading driver
            Class.forName("com.mysql.jdbc.Driver");

            try ( //creating connection
                    Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/test1","root","1234")) {
                        Statement s = con.createStatement();	//creating statement
                        ResultSet rs = s.executeQuery("select * from Student");	//executing statement
                        while (rs.next()) {
                            System.out.println(rs.getInt(1)+" "+rs.getString(2));
                        }
                        //closing connection
                    } //creating statement
            }catch(ClassNotFoundException | SQLException e){
            }
    }
    
}
