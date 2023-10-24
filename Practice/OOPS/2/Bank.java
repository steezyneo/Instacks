import java.util.Scanner;

class Bank
{
    int Accountno;
    float deposit;

    public
    Bank(){
        Accountno=12345;
        deposit = 0.0f;
    }

    void getAccNum(){
        System.out.println(this.Accountno);

    }

    float setDeposit(float dep){
        return this.deposit += dep;
    }

    void getDeposit(){
        System.out.println(this.deposit);
    }

    public static void main(String[] args)   
    {    
        Scanner myobj = new Scanner(System.in);
        float num = myobj.nextFloat();
        Bank obj =new Bank();
        obj.getAccNum();
        obj.setDeposit(num);
        obj.getDeposit();

    } 
}
