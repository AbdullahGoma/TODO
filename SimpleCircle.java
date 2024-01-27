/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.first;

/**
 *
 * @author Abdullah
 */
public class SimpleCircle {
    double radius;
    SimpleCircle(){
        radius = 1;
    }
    SimpleCircle(double newRadius){
        radius = newRadius;
    }
    
    double getArea(){
        return radius*radius*Math.PI;
    }
    double getPrimeter(){
        return 2*radius*Math.PI;
    }
    
    double setArea(double newRadius){
        return radius = newRadius;
    }
}
