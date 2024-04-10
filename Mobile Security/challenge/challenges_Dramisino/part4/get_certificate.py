from androguard.core.bytecodes.apk import APK

apk = APK('braf.2024S.apk')

for cert in apk.get_certificates():
    print(cert.dump().hex())