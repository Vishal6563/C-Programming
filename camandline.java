class cammandline
{
    public static void main(String[] args)
    {
        System.out.println("Demonstrate of camand line");

        int No1 = Integer.parseInt(args[0]);
        int No2 = Integer.parseInt(args[1]);

        int Ans = No1 + No2;

        System.out.println("Number of camand line arguments: " +arg.length);

        System.out.println("Addition is :"+Ans);
    }
}