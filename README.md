JumpingLetters. C Tutorials. Embarcadero Rad Studio IDE. Strings. Console Application. Advanced Features. Conio Library. 
The program does the following:
  1. Creates a standard terminal size window (80 columns, 25 rows).
  2. Clears the created window.
  3. Creates a string variable with the value "Hello World!!! Jumping Letters!!! Press Any Key To Exit!!!".
  4. Determines the length of a string (the number of characters in a string).
  5. The outer loop with the parameter is executed.
     5.1. The initial value of the loop parameter is assigned 0 (the numbering of string characters starts from 0).
     5.2. The final value of the loop parameter is assigned a value that is 1 less than the length of the string.
     5.3. The value of the loop parameter is compared with the end value of the loop.
          If it is greater, the loop terminates and continues otherwise.
     5.4. The inner loop with the parameter is executed.
          5.4.1. The initial value of the loop parameter is assigned 70
          5.4.2. The final value of the loop parameter is assigned the value 10 plus the current value of the outer loop parameter.
          5.4.3. The value of the loop parameter is compared with the end value of the loop.
                 If it is less, the inner loop terminates and continues otherwise.
          5.4.4. The inner loop is executed. The position and number of the current character are calculated for display:
                 symbol number: the current value of the outer loop parameter.
                 Line number: 10.
                 Сolumn number: the value of the inner loop parameter.
                 The string character is displayed on the screen at the calculated position, followed by the space character.
                 This technique creates the effect of a character moving across the screen along a line.
                 The output is delayed by 5 milliseconds.
          5.4.5. The value of the inner loop parameter is decreased by 1 (loop step).
     5.5. The value of the outer loop parameter is incremented by 1 (loop step).
  6. The entire row is displayed on the screen in row 10 and column 10.
  7. Waiting for a key to be pressed.
  8. Exits.
    
JumpingLetters. Занятия по C. ИС Embarcadero Rad Studio. Консольное приложение. Расширенные возможности. Библиотека PDCurses. 
Программа делает следующее:
  1. Создаёт окно стандартного размера терминала (80 столбцов, 25 строк).
  2. Очищает созданное окно.
  3. Создаёт строковую переменную со значением "Hello World!!! Jumping Letters!!! Press Any Key To Exit!!!".
  4. Определяет длину строки (количество символов в строке).
  5. Вполняется внешний цикл с параметром.
     5.1. Начальному значению параметра цикла присваивается 0 (нумерация символов строки начинается с 0).
     5.2. Конечному значению параметра цикла присваивается значение на 1 меньше длины строки.
     5.3. Значение параметра цикла сравнивается с конечным значением цикла.
          Если оно больше, цикл завершает работу и продолжает её в противном случае.
     5.4. Выполняется внутренний цикл с параметром.
          5.4.1. Начальному значению параметра цикла присвается 70
          5.4.2. Конечному значению параметра цикла присваивается значение 10 плюс текущее значение параметра внешнего цикла.
          5.4.3. Значение параметра цикла сравнивается с конечным значением цикла.
                 Если оно меньше, внутренний цикл завершает работу и продолжает её в противном случае.
          5.4.4. Выполняется серия внутреннего цикла. Вычисляется позиция и номер текущего символа для вывода на экран:
                 номер символа: текущее значение параметра внешнего цикла.
                 номер строки: 10.
                 номер столбца: значение параметра внутреннего цикла.
                 В рассчитанную позицию выводится на экран символ строки, а следом за ним символ пробел.
                 Этот приём создаёт эффект движения символа по экрану вдоль строки.
                 Вывод задерживается на 5 милисекунд.
          5.4.5. Значение параметра внутреннего цикла уменьшается на 1 (шаг цикла).  
     5.5. Значение параметра внешнего цикла увеличивается на 1 (шаг цикла).
  6. На экран в 10 строку и 10 столбец выводится вся строка.
  7. Ждёт нажатия клавиши.
  8. Завершает работу.

