1. 一个信号量S是个整型变量, 它除了初始化外只能通过两个标准原子操作: wait() 和 signal() 来访问:
* 操作wait() 最初称为P;(--)
* 操作signal() 最初称为V;(++)

可以按照以下来定义wait():
	wait(S)
{
	while (S <= 0)
		;//busy wait
	S--;
}

可以按照以下来定义signal():
	signal(S)
{
	S++;
}

在wait()和signal()操作中, 信号量整数值的修改应不可分割地执行.
也就是说, 当一个进程修改信号量时, 没有其它进程能够同时修改同一
信号量的值. 另外, 对于wait(S), S整数值的测试(S < 0)和修改(S--)
也不能被中断.

2. 信号量的使用
操作系统通常区分计数信号量与二值信号量.计数信号量的值不受限制,
而二值信号量的值只能为0或1, 因此, 二进制信号量类似于互斥锁.
事实上, 在没有提供互斥锁的系统上, 可以使用二进制信号量来提供互斥.
