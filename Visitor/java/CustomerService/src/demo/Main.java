package demo;

import useinstanceof.Customer;
import useinstanceof.Member;
import useinstanceof.Service;
import useinstanceof.VIP;
/**
 * Main
 * Test program for the visitor pattern & using instanceof keyword.
 * No difference between two approaches.
 */
public class Main {
    public static void main(String[] args) {
        Service service = new Service();
        service.doService(new Member());
    }
}