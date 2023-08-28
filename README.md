# Проект FILLIT
Цель проекта - разместить заданный набор тетриминок (фигурок тетриса, состоящих из 4 блоков) в квадратной области наименьшей площади так, чтобы тетриминки не пересекались друг с другом (незаполненные «дырки» в области допускаются). При реализации использовалась интерпретация Алгоритма Х Д.Кнута с использованием техники “танцующих ссылок”.



## Начало Работы

### Копирование
Для копирования файлов Проекта на локальный компьютер в папку *<your_dir_on_local_computer>* выполните:

```
    $ git clone git@github.com:dbadeev/fillit.git <your_dir_on_local_computer>
```

### Описание файлов
* *fillit.en.pdf* - текст задания  
* Папка *srcs* - C-файлы и библиотека *libft*  
* Папка *includes* - заголовочные файлы  
* Папка *samples* - примеры файлов с различными наборами тетриминок (как валидными, так и невалидными)  
* *Makefile* - файл с инструкциями для утилиты make  
* *generator.py* - утилита генерации файла со случайным набором заданного количества валидных тетраминок  
 *author* - список авторов реализации Проекта  
  <br>
  
  
### Установка
Для компиляции исходных файлов из папки *<your_dir_on_local_computer>* выполните команду:

```
    $ make
```

В результате будет сформирован исполнимый файл с именем *fillit*

Для генерации тестового набора валидных тетраминок можно воспользоваться утилитой *generator.py*. Для этого из папки *<your_dir_on_local_computer>* выполните:

```
    $ python3 generator.py [1 to 26] > <testing_file>
```

В зависимости от параметра *<number_of_tetramines>* в квадратных скобках, в файле *<testing_file>*  будет сформирован набор из *<number_of_tetramines>* валидных тетраминок.
<br>
<br>
<br>
  
## Запуск программы

Для запуска программы из папки *<your_dir_on_local_computer>* выполните команду *fillit* с параметром *<testing_file>*, в котором содержатся тетраминки, которые нужно разместить в квадрате наименьшей размерности:

```
    $ ./fillit <testing_file>
```

После отработки программы будет выведен квадрат наименьшего размера, заполненный исходными тетраминками или *error* в случае невалидных исходных данных.

<br>  

## Подробности

Подробнее о Проекте, примеры использования - по ссылке Wiki (https://github.com/dbadeev/fillit/wiki).

<br>

## Авторы

*loram (Дмитрий Бадеев)* - алгоритм, тестирование  
*eflorean (Антон Федорин)* - валидация, структура данных, тестирование

<br>
<br>

## Результат в School 21
![image](https://github.com/dbadeev/fillit/assets/50623941/7dfa5a54-b7cb-471d-868a-bfcfc5cd3307)
