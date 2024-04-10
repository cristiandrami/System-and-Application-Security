
import java.io.UnsupportedEncodingException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;


/* loaded from: classes.dex */
public class DigestCreator  {
    

     public static String bytesToHex(byte[] bArr) {
        char[] cArr = new char[bArr.length * 2];
        char[] HEX_ARRAY = "0123456789ABCDEF".toCharArray();
        for (int i2 = 0; i2 < bArr.length; i2++) {
            int i3 = bArr[i2] & 255;
            int i4 = i2 * 2;
            char[] cArr2 = HEX_ARRAY;
            cArr[i4] = cArr2[i3 >>> 4];
            cArr[i4 + 1] = cArr2[i3 & 15];
        }
        return new String(cArr);
    }

    public static String computeHash(String str, String str2) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
            messageDigest.update(str.getBytes("UTF-8"));
            messageDigest.update(str2.getBytes("UTF-8"));
            return bytesToHex(messageDigest.digest());
        } catch (UnsupportedEncodingException | NoSuchAlgorithmException unused) {
            return "";
        }
    }




    // this is written after getting the correct painting
    

    public static String getFlag2() {

        // this is written after getting the correct painting
        String found_name = "SustainableLeftsMaintainOriginally";
        String found_secret = "CrowdedFilmMakersDisappointWhatever";
        String str;
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
            messageDigest.update("yesthisone".getBytes("UTF-8"));
            messageDigest.update(found_name.getBytes("UTF-8"));
            messageDigest.update(found_secret.getBytes("UTF-8"));
            str = bytesToHex(messageDigest.digest());
            

            
        } catch (UnsupportedEncodingException | NoSuchAlgorithmException unused) {
            str = "";
        }
        

        // I construct it in this way because the flag must be of the form: FLG_PT2{random_flag_is_**12 chars returned by the digest in this method**}
        return "FLG_PT2{random_flag_is_"+str.toLowerCase().substring(0,12)+"}";
    }




    public static void main(String[] args) {

          String fileName = "paintings.txt";

        try (BufferedReader br = new BufferedReader(new FileReader(fileName))) {
            String line;
            int i =0;
            while ((line = br.readLine()) != null) {
                String[] parts = line.split("\\s+");
                
                if (parts.length >= 2) {
                    String part1 = parts[0];
                    String part2 = parts[1];
                    i++;
                    if(computeHash(part1, part2).equals("6E3E25FC3EBEE6CDF0B383683B261045D3DD52D5D3C106BD5F11FBCAD01C8285")){
                        System.out.println(part1+" " + part2);
                    }

                }
            //System.out.println(i);

            }

        
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println(getFlag2());
    }

   
}




