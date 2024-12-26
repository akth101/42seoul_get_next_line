## get_next_line  
get_next_line은 파일 디스크립터로부터 개행문자를 기준으로 한 줄씩 읽어오는 함수를 구현하는 프로젝트입니다.

목차
1. 어려웠던 점
2. 평가 피드백
3. 함수 개요
4. 구현 세부사항
5. 보너스 파트

### 1. 어려웠던 점
- 서브젝트의 내용을 상당 부분 오독해서 엉뚱한 기능을 구현하다가 시간을 많이 낭비했습니다.
- 문제 오독으로 인한 잘못된 설계 때문에 함수의 기능별 분화가 제대로 이뤄지지 않았습니다.
- memory leak과 free, EOF 등 문제에 사용되는 개념과 read 등 함수들의 "정확한" 의미를 몰라 내가 어떤 문제를 해결해야 하는지조차 몰라 몇 번이고 갈아엎는 작업을 반복했습니다.

### 2. 평가 피드백
<img width="1228" alt="스크린샷 2024-12-26 오후 3 02 41" src="https://github.com/user-attachments/assets/9839496e-31c3-4d37-a1a3-7c1044529a1b" />

### 3. 함수 개요
~~~
char *get_next_line(int fd);
~~~
매개변수:
fd: 읽어올 파일의 파일 디스크립터

반환값:
성공 시: 읽어온 한 줄의 문자열 (개행문자 포함)
실패 또는 더 이상 읽을 내용이 없는 경우: NULL

### 4. 구현 세부사항  
정적 변수 활용: 함수 호출 간에 데이터를 유지하기 위해 정적 변수를 사용합니다.  
버퍼 처리: BUFFER_SIZE 매크로를 통해 설정된 크기만큼 파일을 읽어옵니다.  

보조 함수들:  
ft_strlen: 문자열 길이 계산  
ft_strchr: 문자열에서 특정 문자 위치 찾기  
ft_strjoin: 두 문자열 연결  
ft_strndup: 문자열의 일부분 복제  
ft_strrest: 남은 문자열 처리  

### 5. 보너스 파트  
보너스 구현에서는 다음 기능이 추가되었습니다:  
여러 파일 디스크립터 동시 처리  
OPEN_MAX 매크로를 활용한 파일 디스크립터 배열 관리  
각 파일 디스크립터별 독립적인 정적 변수 관리  
주요 특징:  
파일 디스크립터 범위 체크  
다중 파일 디스크립터 처리를 위한 배열 구조 사용  
