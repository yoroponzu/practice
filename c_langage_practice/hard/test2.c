#include <stdio.h>
#include <string.h>

#define MAX 100

// 構造体
struct Task {
    char title[100];
    char deadline[20];
    int done; // 0:未完了 1:完了
};

// 関数プロトタイプ
void addTask(struct Task *tasks, int *count);
void showTasks(struct Task *tasks, int count);
void markDone(struct Task *tasks, int count);
void deleteTask(struct Task *tasks, int *count);

int main(void) {
    struct Task tasks[MAX];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- ToDo管理 ---\n");
        printf("1: タスク追加\n");
        printf("2: 一覧表示\n");
        printf("3: 完了にする\n");
        printf("4: 削除\n");
        printf("0: 終了\n");
        printf("番号を選択してください: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTask(tasks, &count);
                break;
            case 2:
                showTasks(tasks, count);
                break;
            case 3:
                markDone(tasks, count);
                break;
            case 4:
                deleteTask(tasks, &count);
                break;
            case 0:
                printf("終了します\n");
                return 0;
            default:
                printf("無効な入力です\n");
        }
    }
}

// タスク追加
void addTask(struct Task *tasks, int *count) {
    if (*count >= MAX) {
        printf("これ以上追加できません\n");
        return;
    }

    printf("タイトルを入力: ");
    scanf("%s", tasks[*count].title);

    printf("期限を入力: ");
    scanf("%s", tasks[*count].deadline);

    tasks[*count].done = 0;
    (*count)++;

    printf("タスクを追加しました\n");
}

// 一覧表示
void showTasks(struct Task *tasks, int count) {
    int i;

    if (count == 0) {
        printf("タスクがありません\n");
        return;
    }

    printf("\nNo  タイトル        期限        状態\n");

    for (i = 0; i < count; i++) {
        printf("%-3d %-12s %-10s ",
               i + 1,
               tasks[i].title,
               tasks[i].deadline);

        if (tasks[i].done == 0) {
            printf("未\n");
        } else {
            printf("完\n");
        }
    }
}

// 完了処理
void markDone(struct Task *tasks, int count) {
    int index;

    if (count == 0) {
        printf("タスクがありません\n");
        return;
    }

    printf("完了にする番号を入力: ");
    scanf("%d", &index);

    if (index < 1 || index > count) {
        printf("無効な番号です\n");
        return;
    }

    tasks[index - 1].done = 1;
    printf("完了にしました\n");
}

// 削除処理
void deleteTask(struct Task *tasks, int *count) {
    int index, i;

    if (*count == 0) {
        printf("タスクがありません\n");
        return;
    }

    printf("削除する番号を入力: ");
    scanf("%d", &index);

    if (index < 1 || index > *count) {
        printf("無効な番号です\n");
        return;
    }

    // 配列を詰める
    for (i = index - 1; i < *count - 1; i++) {
        tasks[i] = tasks[i + 1];
    }

    (*count)--;

    printf("削除しました\n");
}