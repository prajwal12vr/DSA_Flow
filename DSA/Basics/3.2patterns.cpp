    int i=1;
  while(i<=n){
      int j=1;
      char ch='A'+i+j-2;
      while(j<=n){
      cout<<ch<<" ";
      ch=ch+1;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }

    int i=1;
  while(i<=n){
    int j=1;
    char ch='A'+i-1;
    while(j<=i){
      cout<<ch<<" ";
      j=j+1;
    }
    cout<<endl;
    i=i+1; 
  }

    int i=1;
  char ch='A';
  while(i<=n){
    int j=1;
    while(j<=i){
      cout<<ch<<" ";
      j=j+1;
      ch=ch+1;
    }
    cout<<endl;
    i=i+1;
  }

  int i=1;
  while(i<=n){
    int j=1;
    char ch='A'+i+j-2;
    while(j<=i){
      cout<<ch<<" ";
      j=j+1;
      ch=ch+1;
    }
    cout<<endl;
    i=i+1;
  }

    int i=1;
  while(i<=n){
    int j=1;
    char ch=n+'A'-i;
    while(j<=i){
      cout<<ch<<" ";
      j=j+1;
      ch=ch+1;
    }
    cout<<endl;
    i=i+1;
  }

    int i=1;
  while(i<=n){
    
    int space=n-i;
    while(space){
      cout<<" ";
      space=space-1;
    }

    int star=1;
    while (star<=i){
      cout<<"*";
      star=star+1;
    }
    cout<<endl;
    i=i+1;

  }

    int i=1;
  while(i<=n){
    
    int j=1;
    while (j<=n-i){
      cout<<"*";
      j=j+1;
    }
    cout<<endl;
    i=i+1;

  }

  int main(){
  int n=5;

  int i=1;
  while(i<=n){
    
    int space=0;
    while(space<i){
      cout<<" ";
      space=space+1;
    }

    int star=i;
    while (star<=n){
      cout<<"*";
      star=star+1;
    }
    cout<<endl;
    i=i+1;

  }

    int i=1;
  while(i<=n){
    
    int space=1;
    while(space<i){
      cout<<" ";
      space=space+1;
    }

    int j=i;
    while (j<=n){
      cout<<j;
      j=j+1;
    }
    cout<<endl;
    i=i+1;

  }

  int i=1;
  while(i<=n){
    
    int space=1;
    while(space<i){
      cout<<" ";
      space=space+1;
    }

    int j=i;
    while (j<=n){
      cout<<i;
      j=j+1;
    }
    cout<<endl;
    i=i+1;

  }

  int i=1;
  while(i<=n){
    
    int space=n-i;
    while(space){
      cout<<" ";
      space=space-1;
    }

    int j=1;
    while (j<=i){
      cout<<i;
      j=j+1;
    }
    cout<<endl;
    i=i+1;

  }

  int i=1;
  while(i<=n){
    
    int space=1;
    while(space<i){
      cout<<" ";
      space=space+1;
    }

    int j=i;
    while (j<=n){
      cout<<j;
      j=j+1;
    }
    cout<<endl;
    i=i+1;

  }

  int i=1;
  while(i<=n){

    //1st space tri
    int space=n-i;
    while(space){
      cout<<" ";
      space=space-1;
    }

    //1st no tri
    int j=1;
    while (j<=i){
      cout<<j;
      j=j+1;
    }

    //2nd no tri
    int j1=1;
    while(j1<i){
      cout<<j1;
      j1=j1+1;
    }
    cout<<endl;
    i=i+1;

  }

