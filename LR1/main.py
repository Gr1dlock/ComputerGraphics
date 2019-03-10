from tkinter import *
from process import *
from math import sqrt


class EditWindow:  # Класс окна редактирования
    def __init__(self):
        self.top = Toplevel()
        self.top.title("Редактирование")
        self.top.geometry('300x150')
        self.top.configure(bg='#8FBC8F')
        lab1_top = Label(self.top,
                         text='Введите новые координаты точки (X Y): ',
                         font='Arial 16', bg='#8FBC8F')
        self.lab2_top = Label(self.top, text='', font='Arial 12',
                              bg='#8FBC8F', fg='#B22222')
        self.ent_top = Entry(self.top, width=12, bg='white', font='Arial 12',
                             bd=2)
        but_top = Button(self.top, text='Редактировать', width=15, height=1)
        self.el = listbox.curselection()

        but_top['command'] = self.edit

        lab1_top.place(x=10, y=30)
        self.lab2_top.place(x=80, y=55)
        self.ent_top.place(x=20, y=80)
        but_top.place(x=150, y=83)

    def edit(self):  # Функция редактирования точки
        s = StringVar()
        s = self.ent_top.get()
        s = s.strip()
        if s.find(' ') != -1 and s.count(' ') == 1:
            x, y = s.split()
            if is_digit(x) and is_digit(y):
                listbox.delete(self.el[0])
                listbox.insert(self.el[0], str(self.el[0] + 1) + ') ' + s)
                self.top.destroy()
            else:
                self.lab2_top.configure(text='Некорректное значение')
        else:
            self.lab2_top.configure(text='Некорректное значение')


def clear(event):  # Функция очистки всех полей
    canv.delete('all')
    canv.create_line(40, 550, 550, 550, fill='Black',
                     width=3, arrow=LAST,
                     arrowshape="10 20 10")
    canv.create_line(20, 510, 20, 10, fill='Black',
                     width=3, arrow=LAST,
                     arrowshape="10 20 10")
    canv.create_text(45, 20, text="Y", justify=CENTER, font="Arial 24")
    canv.create_text(545, 525, text="X", justify=CENTER, font="Arial 24")
    listbox.delete(0, END)
    lab3.configure(text='')
    lab4.configure(text='')
    lab5.configure(text='')
    lab6.configure(text='')
    lab7.configure(text='')
    lab8.configure(text='')
    lab9.configure(text='')
    lab10.configure(text='')
    lab2.configure(text='')
    count.set(0)


def delete(event):  # Функция удаления точки
    el = listbox.curselection()
    if len(el) > 0:
        listbox.delete(el[0])
        count.set(count.get() - 1)
        arr = listbox.get(el[0], END)
        listbox.delete(el[0], END)
        for i in range(el[0],count.get()):
            tmp, x, y = arr[i - el[0]].split()
            listbox.insert(END, str(i+1) + ') ' + x + ' ' + y)


def add(event):  # Функция добавления точки
    s = StringVar()
    s = ent.get()
    s = s.strip()
    if s.find(' ') != -1 and s.count(' ') == 1:
        x, y = s.split()
        if is_digit(x) and is_digit(y):
            count.set(count.get() + 1)
            listbox.insert(END, str(count.get()) + ') ' + s)
            lab2.configure(text='')
        else:
            lab2.configure(text='Некорректное значение')
    else:
        lab2.configure(text='Некорректное значение')
    ent.delete(0, END)


def edit_top(event):  # Функция вызова окна редактирования точки
    el = listbox.curselection()
    if len(el) > 0:
        top = EditWindow()


def solution(event):  # Функция вывода результата в текстовой и графической формах
    canv.delete('all')
    canv.create_line(40, 550, 550, 550, fill='Black',
                     width=3, arrow=LAST,
                     arrowshape="10 20 10")
    canv.create_line(20, 510, 20, 10, fill='Black',
                     width=3, arrow=LAST,
                     arrowshape="10 20 10")
    canv.create_text(45, 20, text="Y", justify=CENTER, font="Arial 24")
    canv.create_text(545, 525, text="X", justify=CENTER, font="Arial 24")
    table = []
    arr = listbox.get(0, END)
    for line in arr:
        tmp, x, y = line.split()
        table.append([int(tmp[:len(tmp)-1]), float(x), float(y)])
    if len(table) < 3:  # Случай недостаточного числа точек
        lab3.configure(text='Недостаточно точек для')
        lab4.configure(text='построения треугольника')
        lab5.configure(text='')
        lab6.configure(text='')
        lab7.configure(text='')
        lab8.configure(text='')
        lab9.configure(text='')
        lab10.configure(text='')
    else:
        res, min_count = find_res(table)
        if len(res) == 0:  # Случай вырожденности
            lab3.configure(text='Все точки лежат на')
            lab4.configure(text='одной прямой')
            lab5.configure(text='')
            lab6.configure(text='')
            lab7.configure(text='')
            lab8.configure(text='')
            lab9.configure(text='')
            lab10.configure(text='')
        else:  # Случай сущестования треугольника
            lab3.configure(text='Точки №' + str(res[0][0]) + ' (' +
                           str(res[0][1]) + ', ' + str(res[0][2]) + '),')
            lab4.configure(text='№' + str(res[1][0]) + ' (' + str(res[1][1])
                           + ', ' + str(res[1][2]) + ') и №' + str(res[2][0])
                           + ' (' + str(res[2][1]) + ', ' +
                           str(res[2][2]) + ')')
            lab5.configure(text='образуют треугольник с')
            lab6.configure(text='минимальной разностью')
            lab7.configure(text='количеств точек внутри')
            lab8.configure(text='треугольника и снаружи,')
            lab9.configure(text='но внутри описанной вокруг')
            lab10.configure(text='него окружности, равной ' + str(min_count))
            xc, yc, r = find_center(res[0][1], res[0][2],
                                    res[1][1], res[1][2],
                                    res[2][1], res[2][2])
            k, xmin, ymax = find_coef(xc, yc, r)
            coords = []
            for i in range(len(res)):
                xk, yk = scale(res[i][1], res[i][2], xmin,
                                             ymax, k, 30, 30)
                canv.create_oval(xk - 2, yk - 2, xk + 2,
                                 yk + 2, fill='Black')
                coords.append([xk, yk])
            canv.create_line(coords[0][0], coords[0][1], coords[1][0],
                             coords[1][1])
            canv.create_line(coords[1][0], coords[1][1], coords[2][0],
                             coords[2][1])
            canv.create_line(coords[0][0], coords[0][1], coords[2][0],
                             coords[2][1])
            xc, yc = scale(xc, yc, xmin, ymax, k, 30, 30)
            r = round(sqrt((xc - coords[0][0])**2 + (yc - coords[0][1])**2))
            canv.create_oval(xc - r, yc - r, xc + r, yc + r)
            for i in range(len(res)):
                canv.create_text(coords[i][0] + 3, coords[i][1] - 10,
                                 text="№" + str(res[i][0]) + " (" +
                                 str(res[i][1]) + "," + str(res[i][2]) + ")",
                                 justify=CENTER, font="Times 12 bold")


if __name__ == '__main__':

    root = Tk()
    root.title('Лабораторная работа 1')
    root.geometry('1120x600')
    root.configure(bg='#8FBC8F')

    scrollbar = Scrollbar(root)
    scrollbar.pack(side=RIGHT, fill=Y)

    count = IntVar()
    count.set(0)
    canv = Canvas(root, width=560, height=560, bg='#FFFAFA', cursor="pencil")
    ent = Entry(root, width=12, bg='white', font='Arial 12', bd=2)
    lab1 = Label(root, text='Введите координаты точки (X Y): ',
                 font='Arial 16', bg='#8FBC8F')
    listbox = Listbox(root, width=30, height=20, bg='white',
                      yscrollcommand=scrollbar.set)
    lab2 = Label(root, text='', font='Arial 12', bg='#8FBC8F', fg='#B22222')
    lab3 = Label(root, text='', font='Arial 12', bg='#8FBC8F')
    lab4 = Label(root, text='', font='Arial 12', bg='#8FBC8F')
    lab5 = Label(root, text='', font='Arial 12', bg='#8FBC8F')
    lab6 = Label(root, text='', font='Arial 12', bg='#8FBC8F')
    lab7 = Label(root, text='', font='Arial 12', bg='#8FBC8F')
    lab8 = Label(root, text='', font='Arial 12', bg='#8FBC8F')
    lab9 = Label(root, text='', font='Arial 12', bg='#8FBC8F')
    lab10 = Label(root, text='', font='Arial 12', bg='#8FBC8F')
    but1 = Button(root, text='Решить', width=10, height=1)
    but2 = Button(root, text='Очистить список', width=15, height=1)
    but3 = Button(root, text='Удалить точку', width=15, height=1)
    but4 = Button(root, text='Добавить точку', width=15, height=1)
    but5 = Button(root, text='Редактировать точку', width=17, height=1)

    canv.create_line(40, 550, 550, 550, fill='Black',
                     width=3, arrow=LAST,
                     arrowshape="10 20 10")
    canv.create_line(20, 510, 20, 10, fill='Black',
                     width=3, arrow=LAST,
                     arrowshape="10 20 10")
    canv.create_text(45, 20, text="Y", justify=CENTER, font="Arial 24")
    canv.create_text(545, 525, text="X", justify=CENTER, font="Arial 24")

    root.bind('<Return>', add)
    but1.bind('<Button-1>', solution)
    but2.bind('<Button-1>', clear)
    but3.bind('<Button-1>', delete)
    but4.bind('<Button-1>', add)
    but5.bind('<Button-1>', edit_top)

    but1.place(x=970, y=300)
    but2.place(x=720, y=540)
    but3.place(x=950, y=260)
    but4.place(x=950, y=180)
    but5.place(x=940, y=220)
    ent.place(x=880, y=110)
    lab1.place(x=635, y=110)
    lab2.place(x=750, y=140)
    lab3.place(x=940, y=330)
    lab4.place(x=940, y=350)
    lab5.place(x=940, y=370)
    lab6.place(x=940, y=390)
    lab7.place(x=940, y=410)
    lab8.place(x=940, y=430)
    lab9.place(x=940, y=450)
    lab10.place(x=940, y=470)
    canv.place(x=20, y=20)
    listbox.place(x=660, y=170)

    scrollbar.config(command=listbox.yview)

    root.mainloop()
