# Physics-based Newton's Law of Cooling Simulator
a C-based physical cooling simulator designed to estimate the temperature of a body after a given time as it cools in its surroundings. The program takes input from user (i) the cooling constant K (chosen from preset real-life cases or entered manually) (ii) the initial temperature of the body (iii) the surrounding temperature (iv) the time elapsed, to determine the temperature of the body after that time.
## Key calculations
* **Temperature after time t:**(T2) The estimated temperature of the body after t seconds.
* **Cooling constant:**(K) The rate constant of cooling in s^-1, chosen from preset cases (iron rod in chilled water, hot coffee/tea, boiling water, human body) or entered manually.
## Description
inspired by ,again my physics lecture, i built this project to help deepen my understanding of the law as well as building a well working program that instantly calculates the estimated temperature through math calculations accurately. it takes 3 users from the input (i) the value 'k'- the physical cooling constant- which the user can either type manually or select from 4 given options (ii) the initial temperature of body in degree celcius and (iii) the time in seconds . taking all these inputs the program accurately calculates the estimated temperature after that time 't' and also displays the simplified formula used plus the actual formula (differential equation). i converted every value of k from our list into s^-1 to simplify and to bring a uniform unit for calculations the simplified formula gives an equation but in the program i simplify it to find the answer for t2 . next if k had a range i took mid value for approximate value (mean).i deepened my experience with code and github , i also learnt and read the value of k for several bodies such as human body, boiling water, etc. using switch statements to read the value of k and math operations for calculations, this project works accurately and as intended. however, the formula used in this project is an estimated formula , the exact formula is a first order differential equation (which is shown but not used) . for simple calculations and approximated answer, the simple formula is used.this is my second project , and i will soon be making another project related to real life phsyics.
thank you.

## Formulas used
* Estimate formula (used for calculation): (T1 - T2) / t = K * ((T1 + T2)/2 - Ts)
* For (T2): T2 = {T1 * (1 - K*t/2) + K*t*Ts} / (1 + K*t/2)
* True formula (only displayed): T(t) = Ts + (T1 - Ts) * e^(-K*t)
