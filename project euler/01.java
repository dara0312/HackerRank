import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

	static long s(long n) { return n * (n+1) / 2; }
	
    public static void main(String[] args) {
    	InputReader reader = new InputReader(System.in);
    	int T = reader.nextInt();
    	while (T-- > 0) {
    		long N = reader.nextInt();
    		N -= 1;
    		System.out.println(s(N/3)*3 + s(N/5)*5 - s(N/15)*15);
    	}
    }
}

class InputReader {
    public BufferedReader reader;
    public StringTokenizer tokenizer;

    public InputReader(InputStream stream) {
        reader = new BufferedReader(new InputStreamReader(stream), 32768);
        tokenizer = null;
    }

    public String next() {
        while (tokenizer == null || !tokenizer.hasMoreTokens()) {
            try {
                tokenizer = new StringTokenizer(reader.readLine());
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
        return tokenizer.nextToken();
    }

    public int nextInt() {
        return Integer.parseInt(next());
    }
}