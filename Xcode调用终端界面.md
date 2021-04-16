# Xcode调用终端界面
## 调用方式
加入ncurses库：

```
#include <ncurses.h>
```
打开终端编译并加入编译参数：
```
gcc filename -lncurses
```
## 样例输入
```
#include <ncurses.h>

int main()
{
    initscr();/*启用ncurses模式
    /*
    codes
    */
    endwin();/*结束ncurses模式
    return 0;
}
```
