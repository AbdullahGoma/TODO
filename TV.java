/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.first;

/**
 *
 * @author Abdullah
 */
public class TV {
    int channel = 1;
    int volumeLevel = 1;
    boolean on = false;
    public TV(){
        
    }
    public void turnOn(){
        on = true;
    }
    public void turnOff(){
        on = false;
    }
    public void setChannel(int newChannel){
        if(on && newChannel >= 1 && newChannel <= 120){
            channel = newChannel;
        }
    }
    public void setVolume(int newVolumelevel){
        if(on && newVolumelevel >= 1 && newVolumelevel <= 7){
            volumeLevel = newVolumelevel;
        }
    }
    public void channelup(){
        if(on && channel < 120){
            channel++;
        }
    }
    public void channeldown(){
        if(on && channel > 1){
            channel--;
        }
    }
    public void volumelup(){
        if(on && volumeLevel < 7){
            channel++;
        }
    }
    public void volumedown(){
        if(on && volumeLevel > 1){
            channel--;
        }
    }
    
        
    
}
