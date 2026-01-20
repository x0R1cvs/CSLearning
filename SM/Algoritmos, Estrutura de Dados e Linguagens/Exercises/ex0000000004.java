import java.util.*;

public class ex0000000004{
    public static void main(String args[]){
        float x,y,z;
        Scanner x1,x2;
        x1 = new Scanner(System.in);
        x = x1.nextFloat();
        x2 = new Scanner(System.in);
        y = x2.nextFloat();
        z = (x * 2 + y * 3) / (2+3);
        System.out.println(z);
    }
}