package stringReverse;

import java.util.Scanner;

/**
 * 本例用于测试字符串移位算法
 */
public class Main {

    public static void main(String[] args) {
        while (true){
            Scanner scanner = new Scanner(System.in);
            System.out.println("请输入想要移位的字符串：");
            String string = scanner.next();
            System.out.println("请选择想要进行的移位操作：");
            System.out.println("0\t左移");
            System.out.println("1\t右移");
            System.out.println("2\t字符串反转");
            int number = scanner.nextInt();
            switch (number){
                case 0:
                    System.out.println("请输入想要左移的位数：");
                    int indexLeft = scanner.nextInt();
                    System.out.println("左移之后的字符串表示为：" + leftReserve(string, indexLeft));
                    break;
                case 1:
                    System.out.println("请输入想要右移的位数：");
                    int indexRight = scanner.nextInt();
                    System.out.println("右移之后的字符串表示为：" + rightReserve(string, indexRight));
                    break;
                case 2:
                    //下面的方法是利用系统自带的StringBuffer函数中的reverse方法
                    System.out.println("反转后的字符串为：" + new StringBuffer(string).reverse().toString());
                    //还可以用自己编写的reChange()方法：
                    //System.out.println("反转后的字符串为：" + reChange(string));
                    break;
                default:
                    System.out.println("当你看到该输出时，表明输入有误，程序已停止运行！");
                    return;
            }
        }
    }

    /**
     * 本例相当于用二分法对调数组；
     * 平分数组，俩俩对调；
     * 数组长度是从1开始计算的，因此会比数组的位数即char[i]中的i大1；
     * 相当于如果一个数组的长度是7，那么从0，开始，0对6,1对5,2对4,3对3,3不变；
     * 如果数组长度刚好是偶数，那么可以一对一对调；
     * @param oriString
     * @return
     */
    public static String reChange(String oriString){
        char[] strings = oriString.toCharArray();       //先把字符串以栈的形式存入一个数组
        int length = strings.length;                    //计算该数组的长度
        for(int i = 0; i < length/2; i++){              //取中间结点，然后进行位置对调
            char temp = strings[i];                     //从0开始，数组上的第0位，就是temp，即temp = strings[0];
            strings[i] = strings[length - 1 - i];       //然后俩俩对调，strings[0] = strings[length - 1 - i];
            strings[length - 1 - i] = temp;             //先给需要调换的数取出来，然后将被取出来的数换成其对应的数字，再将被调换的数字的位定义为取出的数
        }
        return String.valueOf(strings);                 //将变量转换成字符串，这里是将数组转换成字符串
    }


    public static String leftReserve(String origString, int number){
        String first = origString.substring(0, number);     //根据输入的移位数字判断需要改变的字符是哪些；
        String second = origString.substring(number);       //除去需要改变的字符，剩下的字符是哪些；
        String nextString = second + first;                 //利用栈的思想，直接将两块字符串位置对调，即可实现位移
        return nextString;

        /**
         * 还有种方法就是通过反转，将需要改变的字符串进行反转，然后相加，再反转，最后得到的也是想要的位移之后的字符串
         * 其思想就是相邻两个字符，通过反转相加之后可以挨在一起
         * ==========================================
         * 同类型的字符串反转方法在IDEA内部也有自带的，比如说:
         * new StringBuffer(first).reverse().toString();
         * ==========================================
         * String first1 = reChange(first);
         * String second1 = reChange(second);
         * origString = first1 + second1;
         * origString = reChange(origString);
         * return origString;
         */

    }

    public static String rightReserve(String originString, int number){
        int length = originString.length();                         //跟左移的原理相同，只不过这时，需要先定义整个字符串的长度
        /**
         * 根据字符串长度，以及substring()方法的定义
         * 数组的长度是比数组的位数最大值要大一的
         * 刚好substring()方法，如果取了startIndex，那么后面的endIndex是取不到，即包含startIndex，而不包含endIndex
         * 这样子的话用数组长度length，减去要位移的位数，即可直接表示endIndex的值
         */
        String first = originString.substring(0, length - number);
        String second = originString.substring(length - number);
        String resultString = second + first;
        return resultString;

        /**
         * 同理，上述方法，可以使用反转的方式实现;
         * 只不过右移的思路，需要先进行反转，这样子方便后续的substring()函数的调用
         * 可以跟左移一样，从数组的第0位开始找
         * 然后各自反转，再相加
         * 此时最后一步就不需要反转回来了！！
         * from = reChange(from);
         * String first = from.substring(0,index);
         * String second = from.substring(index);
         * first = reChange(first);
         * second = reChange(second);
         * from = first + second;
         */
    }
}
