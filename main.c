#include <stdio.h>

int main(void) {
    int arr[3][3] ={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int x,y;
    char answer;
    int i,j;
    int cnt=0;
    for(j=0;j<9;j++) {
        printf("��ġ�� �Է����ּ��� (x,y) : ");
        scanf("%d %d", &x, &y);
        while (arr[x - 1][y - 1] != ' ') {
            if (x != 1 || x != 2 || x != 3 || y != 1 || y != 2 || y != 3) {
                printf("x�� y�� 1~3�� ���� ������ ����ּ���\n");
                printf("��ǥ�� �Է����ּ��� (x,y) : ");
                scanf("%d %d", &x, &y);
            } else {
                printf("�̹� ���ɵ� �ڸ��Դϴ�. �ٸ� ���� ����ּ���\n");
                printf("��ǥ�� �Է����ּ��� (x,y) : ");
                scanf("%d %d", &x, &y);
            }
        }
        if (cnt % 2 == 0) {
            arr[x - 1][y - 1] = 'O';
            cnt++;
        } else {
            arr[x - 1][y - 1] = 'X';
            cnt++;
        }
        for (i = 0; i < 3; i++) {
            printf("---|---|---\n");
            printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
        }
        printf("---|---|---");
        if(cnt == 9){
            printf("������ �������ϴ�.\n");
            printf("�� �� �� �Ͻðڽ��ϱ�? (y/n) : \n");
            scanf("%c",&answer);
            if(answer == 'n'){
                printf("������ ����Ǿ����ϴ�.");
                return 0;
            }
            else if(answer == 'y'){
                cnt = 0;
                j = 0;
            }
        }
    }
}
