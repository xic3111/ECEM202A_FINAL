# ECEM202A_FINAL

1. Introduction

Smart devices were evolving very quickly and played a significant role in our daily life. They are designed to be portable and convenient for users, such as Fitbit and Apple watches. Due the limitation of size, it is very difficult to write or type on these smart devices. Thus, voice input was presented as a substitution for text input. However, voice input extremely depends on real world environment and user’s voice recognition such as accent. Additionally, voice input is relatively much slower compared to text input and it has poor privacy protection. Gesture recognition was also introduced as a replacement for text input, however, it faces the same challenges of efficiency and stability as voice input. In this project, we are going to present a human-computer interaction technology that can overcome the challenges of gesture and voice input, which is wearable virtual keyboard on smart devices. Accelerometer, gyroscope and magnetometer sensors from the Arduino Nano 33 BLE Sense board was used to measure and identify the virtual keystroke being pressed by users. This idea brings convenience to users with much more efficiency and privacy. These sensors are integrated on most of the modern smart device which indicates that it could easily be implemented on commercial products.


2. Related work

Currently, most of the small smart devices only support voice input for the text input. However, there are many restrictions by using voice input, such as difficulty to recognize user’s voice due to external environment like noise. Another issue with voice input is user’s privacy. Therefore, the concept of virtual keyboard was introduced. 
iKey [1] was presented to allow users to type on the back of their hands. By using a small piezoelectric ceramic vibration sensor and vibration mechanism, iKey was able to recognize different tapping locations on the hand with strong resistance to sound noise. Sampling rate of 200Hz was used to make the product more cost and power efficient. During data processing, a 20Hz Butterworth high pass filter and a 300Hz low pass filter was applied to eliminate low frequency noise and potential high frequency harmonics. Then, random-subspace and class-center classification concepts were adopted for sample training. Over the 30 testing users, iKey achieved average accuracy of 92.4%.
Similar to iKey, Oinput [3] was introduced to utilize vibration sensors to detect vibration on both of the user's hands to achieve QWERTY keyboard recognition. Oinput used a notch and bandpass filter to mitigate noise, then process and train sensor data with RNN-LSTM machine learning model. Oinput achieved 93.3% average accuracy over 30 participants. Identical to Oinput, another paper presented virtual QWERTY keyboard recognition could be realized based on MEMS sensor [4] by utilizing accelerometer, gyroscope and magnetometer. Sensor data was collected by placing 4 MEMS sensors on 4 fingers. During data processing, a smoothing filter was used to remove mutation noise. Support Vector Machine was adopted to train the sample data. The overall recognition correct rate achieved 95.07%.

