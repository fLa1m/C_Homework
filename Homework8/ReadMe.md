# �������� ������� �8

## ������ 1. ���������� �� �����������

�������� ������ ���� �������, ������� ��������� ������ �� �����������.
���������� ����������� ������ ���� �������, ��� ��������� ���������� ��
����.
������ �������� ���������. ��� ������� � ��� ��������� ������ ����:  
void sort_array(int size, int a[])

��� ��������� ��������� �� ����, ������ ���� ��� �������. ����� ������
���������������� ����� ���� ���������, ����� ������ �������.

������ �� �����: ������� ��������� �� ����, ������ �������� - ������
�������, ������ �������� - ����� �������� ��������.  
������ �� ������: ������� ������ �� ����������. ����������
���������� ����������� �� ������� �� �����������.

**_������ �1_**  
������ �� �����: 20 19 4 3 2 1 18 17 13 12 11 16 15 14 10 9 8 7 6 5  
������ �� ������: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

**_������ �2_**  
������ �� �����: 5 4 3 2 1  
������ �� ������: 1 2 3 4 5

## ������ 2. ������ � ������

�������� ������ ���� �������, ������� ������ � ������ ������� ��� ������
��������, � � ����� � ��� ��������. �� ��������� ������� ���������� �����
����� �����. ������ �������� ���������:  
void sort_even_odd(int n, int a[])

������ �� �����: ������� ��������� �� ���� ����� �����  
������ �� ������: ��������������� �������� ������

**_������ �1_**  
������ �� �����: 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1  
������ �� ������: 20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3
1

**_������ �2_**  
������ �� �����: 1 0 1 0 1  
������ �� ������: 0 0 1 1 1

## ������ 3. �������� � �������

�������� ������ ���� �������, ������� ������� ������������ ������� �
�������. ��� ��������� ��������� �� ����.
�������� �������:  
int find_max_array(int size, int a[])

������ �� �����: ������ ��������� �� ����� �����. ������ ��������,
������ �������, ������ �������� ����� �������� ��������.  
������ �� ������: ���� ����� �����

**_������_**  
������ �� �����: 773 307 371 548 531 765 402 27 573 591 217 859
662 493 173 174 125 591 324 231 130 394 573 65 570 258 343 3 586 14 785
296 140 726 598 262 807 794 510 465 66 895 182 218 302 34 205 252 687 660
952 737 2 32 310 680 36 139 346 139 489 217 767 544 158 774 883 154 802
136 569 377 867 423 224 176 118 660 513 734 45 978 983 749 909 601 270
147 433 737 789 304 842 769 815 503 190 399 3  
������ �� ������: 983

## ������ 4. ��� ����������

�������� ������ ���� ���������� �������, ������� ����������, ����� ��, ���
����� ��������� ������� ���� ��� ����������. ���� ����� ���, �������
���������� 1; ���� ����� ����, �� 0. ������ �������� ���������:  
int is_two_same(int size, int a[]);

������ �� �����: ������ �� ����� �����  
������ �� ������: ������� ���������� 1 ��� 0

**_������ �1_**  
������ �� �����: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47
48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73
74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
100  
������ �� ������: NO

**_������ �2_**  
������ �� �����: 1 2 1 4 5  
������ �� ������: YES

## ������ 5. �������� �������

��������� �������, ������� ������ � ������� ����������� � ������������
������� �������. �������� �������  
void change_max_min(int size, int a[])

������ �� �����: ������� ��������� �� ���� ������ ������� �
������ ����� ���� int  
������ �� ������: ������� �� ���������� ��������, ����������
������ ����������� �� ����� ���������.

**_������_**  
������ �� �����: 1 2 3 4 5 6 7 8 9 10  
������ �� ������: 10 2 3 4 5 6 7 8 9 1

## ������ 6. ������ ��������

���������� ���������� ������������� ��������� ���������� �������,
����������� �� �������� ������� �������������� ���� ��������� �������
���������. ����������� ������� ������� �������������� �������
���������.

������ �� �����: 5 ����� �� 5 ����� ����� ����� ������  
������ �� ������: ���� ����� �����

**_������_**  
������ �� �����: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5  
������ �� ������: 10