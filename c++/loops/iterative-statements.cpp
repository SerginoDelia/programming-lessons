/*
Loops / Repeating Statements / Iterate Statements

1. while
2. do while
3. for
4. foreach

Start

Input

Precess

if (condition) true
    repeat the process

    if (condition) false
        stop the process

output

Stop

*******************************************/

/* WHILE LOOP
while (condition) {
    process;
}

// displaying n numbers n = 10
int main() {
    int n, i=1;
    // Print i  - i += 1
    cout<<"Enter number ";
    cin>>i;

    while (n <= 10) {
        cout<<i<<endl;
        i++;
    }

    return 0;
}

*******************************************/

/* DO WHILE LOOP
do { // first process, then check the condition - will run at least once
    process
} while (condition);

// displaying n numbers
int main() {
    int n, i=1;
    cout<<"Enter number: ";
    cin>>i;

    do {
        cout<<i<<endl;
        i++;
    } while (i <= 10);

    return 0;
}
*******************************************/


/* FOR LOOP
AKA counter control loop
When you have to repeat the steps based on counting

int main() {
    int n,i;

    cout<<"Enter number";
    cin>>n; 

    for (i=1; i<n; i++) {
        cout<<i<<endl;
    }

    return 0;
}


*******************************************/