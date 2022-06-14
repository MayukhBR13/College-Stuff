 import java.util.stream.Stream;
public class Subnet {
    private static void add(int[] ip,int x){
        int c=0;
        ip[3]+=x;
        if(ip[3]>=256){
            c=(int)ip[3]/256;
            ip[3]%=256;
        }
        ip[2]+=c;c=0;
        if(ip[2]>=256){
            c=(int)ip[2]/256;
            ip[2]%=256;
        }
        ip[1]+=c;c=0;
        if(ip[1]>=256){
            c=(int)ip[1]/256;
            ip[1]%=256;
        }
    }
    public static void main(String[] args)
    {
        if(args.length!=3){
            System.out.println("Parameters:<IP><Prefix><Number_of_sunnet>");
            System.exit(1);
        }
        String address=args[0];
        int prefix=Integer.parseInt(args[1]);
        int number_of_subnets=Integer.parseInt(args[2]);
        int suffix=32-prefix;
        int []ip= Stream.of(address.split("\\.")).mapToInt(x->Integer.parseInt(x)).toArray();
        int each_subnet_address=(int)Math.pow(2,suffix)/number_of_subnets;

        System.out.print("Subnet mask: ");
        int i,j,s;
        int num_bits = (32-suffix);
        for (i = 0; i < (int)(num_bits / 8); i++){
            System.out.print("255.");
        }
        i = i + 1;
        s=0;
        for(j = 0, s = 0; j < (num_bits % 8); j++){
            s=s>>1;
            s=s|128;
            //s = s + (int)Math.pow(2,(7-j));
        }
        System.out.print(s);
        for(;i < 4; i++){
            System.out.print(".0");
        }
        System.out.println("");

        for (i = 0; i < number_of_subnets; i++ ){
            if (i!= 0)
                add(ip,1);
            System.out.print("Subnet " + (i+1) + " : \nStarting address: " + ip[0]+"."+ ip[1]+"."+ ip[2]+"."+ ip[3]);
            add(ip,each_subnet_address-1);
            System.out.print("\tEnding address: " + ip[0]+"."+ ip[1]+"."+ ip[2]+"."+ ip[3] + "\n\n");
        }
    }
}