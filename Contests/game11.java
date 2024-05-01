import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
  public static void main(String[] args) throws java.lang.Exception {
    Scanner scanner = new Scanner(System.in);
    int T = scanner.nextInt();
    for (int i = 0; i < T; i++) {
      int N = scanner.nextInt();
      int M = scanner.nextInt();
      long[] batsmenSkills = new long[N];
      long[] bowlersSkills = new long[M];
      for (int j = 0; j < N; j++) {
        batsmenSkills[j] = scanner.nextLong();
      }
      for (int j = 0; j < M; j++) {
        bowlersSkills[j] = scanner.nextLong();
      }
      Arrays.sort(batsmenSkills);
      Arrays.sort(bowlersSkills);
      if (N < 4 || M < 4 || (M + N) < 11) {
        System.out.println("-1");
        continue;
      }
      long maxSkill = 0;
      int j = N - 1;
      int k = M - 1;
      for (int cnt = 0; cnt < 4; cnt++) {
        maxSkill += batsmenSkills[j--];
      }
      for (int cnt = 0; cnt < 4; cnt++) {
        maxSkill += bowlersSkills[k--];
      }
      for (int cnt = 0; cnt < 3; cnt++) {
        if (j >= 0 && k >= 0) {
          if (batsmenSkills[j] >= bowlersSkills[k]) {
            maxSkill += batsmenSkills[j--];
          } else {
            maxSkill += bowlersSkills[k--];
          }
        } else if (j >= 0) {
          maxSkill += batsmenSkills[j--];
        } else {
          maxSkill += bowlersSkills[k--];
        }
      }
      System.out.println(maxSkill);
    }
    scanner.close();
  }
}
