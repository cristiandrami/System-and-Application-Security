import java.io.*;
import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.nio.charset.StandardCharsets;

import javax.crypto.*;
import javax.crypto.spec.*;

public class Decrypt {

    public static String get_decrypt_key() {

        /*
         * We know which is the package name -> we can see it from the
         * AndroidManifest.xml
         * So we can construct directly the encryption key used by the code to decode
         * the dex file
         * 
         * however the key will be  wien.secpriv.challenges.brafwien
         */
        try {
            StringBuilder sb = new StringBuilder();
            sb.append("wien.secpriv.challenges.braf");
            Class cls = Integer.TYPE;
            sb.append((String) String.class.getMethod("substring", cls, cls).invoke("wien.secpriv.challenges.braf", 0,
                    4));
            return sb.toString();
        } catch (Exception e) {
            return "";
        }
    }

    public static void main(String[] args) {
        String decryption_string = get_decrypt_key();
        String dex_file_do_decrypt = "class.dex";

        /* I can try to download directly the file and decrypt it  */
        HttpClient httpClient = HttpClient.newBuilder().build();
        HttpRequest httpRequest = HttpRequest.newBuilder()
                .uri(URI.create("https://class.sas.hackthe.space/class"))
                .GET()
                .build();

        try {
            HttpResponse<byte[]> response = httpClient.send(httpRequest, HttpResponse.BodyHandlers.ofByteArray());
            byte[] responseBody = response.body();
            try (FileOutputStream fileOutputStream = new FileOutputStream("data.jar")) {
                SecretKeySpec secretKeySpec = new SecretKeySpec(decryption_string.getBytes(), "AES");
                Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
                cipher.init(Cipher.DECRYPT_MODE, secretKeySpec, new IvParameterSpec(new byte[16]));
                fileOutputStream.write(cipher.doFinal(responseBody));
            } catch (Exception e) {
                e.printStackTrace();
            }
        } catch (Exception e) {
            System.err.println("An error occurred: " + e.getMessage());
        }

        /** 
         * 
         * In this case i try to decrypt the dex file dowloaded by the browser
        byte[] dex_file_bytes = null;

        try (FileInputStream fis = new FileInputStream(dex_file_do_decrypt);
                ByteArrayOutputStream bos = new ByteArrayOutputStream()) {

            byte[] buffer = new byte[1024];
            int bytesRead;
            while ((bytesRead = fis.read(buffer)) != -1) {
                bos.write(buffer, 0, bytesRead);
            }

            dex_file_bytes = bos.toByteArray();
        } catch (IOException e) {
            e.printStackTrace();
        }
        

        try (FileOutputStream fileOutputStream = new FileOutputStream("data.jar")) {
            SecretKeySpec secretKeySpec = new SecretKeySpec(decryption_string.getBytes(), "AES");
            Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
            cipher.init(Cipher.DECRYPT_MODE, secretKeySpec, new IvParameterSpec(new byte[16]));
            fileOutputStream.write(cipher.doFinal(dex_file_bytes));
        } catch (Exception e) {
            e.printStackTrace();
        }

        System.out.println(d());
        */
    }
}
