import java.util.*;
public class variable {
    public static void main(String[] args) {
        int num=500000000; //-10^9 to + 10^9
        int sum=num+500000;
        System.out.println(sum);
        double percent=5.5;
        System.out.println(percent);
        float n = 45.365f;
        short s= 1; //2bytes ->16 bits -32768 to 32767
        byte b= 1; //1byte -> -128-127
        char c= 'A';
        c= 66;
        System.out.println(c);
        long l= 50000000000000l;
        System.out.println(l);
        int k = (int) 4.35;//explicit typecasting
        System.out.println(k);
    }
}
/*
naming Convinsion
interface : adjective
class: noun{ }
method:verb
Variable: {Detailed e.g. stockprice, bank details}
conttant: {Detailed}
 */