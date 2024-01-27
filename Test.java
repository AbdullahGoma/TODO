/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.first;

/**
 *
 * @author Abdullah
 */
public class Test {
    public static void main(String[] args){
        Test1 t = new Test1();
        Test1 t1 = new Test1(20,'K',20.20f);
        t = t1;
        t.print();
        t1.print();
    }
    
}
class Test1{
    int l;
    char c;
    float f;
    public Test1(){
        
    }
    public Test1(int ann,char k,float n){
        l = ann;
        c = k;
        f = n;
    }
    public void print(){
        System.out.println(l);
        System.out.println(c);
        System.out.println(f);
        
    }
}