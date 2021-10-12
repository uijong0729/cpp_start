1. #### 아래 코드는 아래 두 경우에 작동하지 않음 

   ```c++
   	char line[256];
   	std::cin.getline(line, 256);
   ```

   > 1. 아무것도 읽지 못했을 때
   > 2. 한 줄에 문자가 255자를 초과할 때

2. #### std::string 클래스

   1. 문자열은 길이가 증가할 수 있음

      ```c++
      #include <string>
      std::string firstName;
      std::cin >> firstName;
      ```

   2. 대입과 덧붙이기

      ```c++
      string firstName = "KIM";
      string fullName = "AM NAE";
      
      // 대입
      fullName = firstName;
      
      // 덧붙이기
      fullName += " KIM"
      ```

   3. 문자열 합치기

      ```c++
      string firstName = "JONG";
      string lastNAME = "LEE";
      string fullName = firstName + " " + lastName;
      ```

   4. 비교 (>, <, <=, >=, ==, !=)

      ```c++
      if (name1 == name2) {
      
      }
      
      // 사전 상의 순서를 비교
      if (name1 > name2) {
      
      }
      ```

3. #### string

   1. 문자 배열 길이에 관해 고민할 필요가 없음

      ```
      1단계 : 16바이트 char배열을 잡는다. (15글자)
      2단계 : 메모리 복사로 char배열을 채운다.
      3단계 : 글자 수를 초과하면, 32비트 메모리를 새로 잡는다.
      4단계 : 새로 잡은 메모리에 기존 문자열을 복사한 다음 이후로 들어오는 글자를 뒤에 복사한다.
      5단계 : 복사대상을 메모리에서 지운다
      ```

   2. 힙(heap) 메모리 할당은 느리다

   3. 메모리 단편화 문제

   4. 성능 이슈 때문에 sprintf와 함께 char[]를 매우 많이 사용

4. #### c_str()

   ```c++
   string line = "name";
   // 참고 : 포인터를 바꿀 순 있지만 포인터가 가리키는 char[]는 바꿀 수 없다.
   const char* cLine = line.c_str(); 
   ```

   
