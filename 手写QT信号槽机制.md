![image-20240329160733797](手写QT信号槽机制.assets/image-20240329160733797.png)

使用multimap，key存放信号（signal），value存放接收者（receiver）、槽函数（slotId）。