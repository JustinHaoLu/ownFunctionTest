package upperString;

/**
 * 本例用于编写能将输入的英文字符串中的小写字母变为大写字母的方法
 */
import java.util.Scanner;

public class upperReverse {

    public static void main(String[] args){
        while (true){
            Scanner scanner = new Scanner(System.in);
            System.out.println("请输入想要的字符变更串：");
            String string = scanner.next();
            System.out.println("请选择想要进行的操作：");
            System.out.println("0--------全部变大写");
            System.out.println("1--------全部变小写");
            System.out.println("2--------指定字符串变化");
            int number = scanner.nextInt();
            int index = 0;
            switch (number){
                case 0:
                    System.out.println("您输入的字符串全变大写之后的输出为：" + string.toUpperCase());
                    break;
                case 1:
                    System.out.println("您输入的字符串全变小写之后的输出为：" + string.toLowerCase());
                    break;
                case 2:
                    cursorString(string, index);
                    break;
                default:
                    System.out.println("当出现此结果时，表明输入有误！程序已停止运行！");
                    return;
            }
        }
    }
    public static String cursorString(String originString, int index){

        return originString;
    }
}
