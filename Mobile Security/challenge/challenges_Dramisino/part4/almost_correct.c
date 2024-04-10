

#include <stdlib.h> 
#include <stdint.h>

char* getSignature()
{
    return "308202bb308201a3a003020102020401f4f45e300d06092a864886f70d01010b0500300e310c300a060355040b1303534153301e170d3231313131313134323230355a170d3436313130353134323230355a300e310c300a060355040b130353415330820122300d06092a864886f70d01010105000382010f003082010a02820101008cfb5d5560445eb635cd56f69c1da17bee0a3b864312eba07b8dc37bc2f174e94efc4b3b1f78cce4a2bbaf9636a3c840ce28b35a59bf866623186be6bb2d4f02cbc66901f3a35e152521352c0bff7b8cbf539b03bceebf0765d26ebb4f3855c90d26611d9e555438e379e6d4cdb864572a417c82b2347b89d6b82c799b9c9f67960fe4831c1e677a6c19fc7bf66bdebfca8a9244ac59dba371140d4c4920a24b1cc7fc55102fad2516f5c06dbaee868b029d55b7ace4c9fcc94dfaf889cfc422f97048e418a74e3c11da18623f964f56e750c82fe02baa97d9f9827bc44987953766b868a2e2136292b16c02f45b7ec4babc25af8d6ce70a0ef8d5e7f9fbc4a50203010001a321301f301d0603551d0e04160414411465dbf011aff9d742cec358a94e3da8934799300d06092a864886f70d01010b050003820101000b456b166acc3a839b881463ba8903a8cc6401a4f39f5ee0ef764f78244b351a03df00d0f5938a900c108bb64e82a8ef1828384afa27ac7a733740ce60ee6f582066c44d9573b67d66792ed30bd517f466c50f418658076f980ffa49ab178620738693d95e9e1e9cae0e2e4ba0641f770c5e18e0c4a2e8af79537165569d12d72809ac82cff54f76fc1ea08ebe92984631d54a0e7b0bc5e0db669b59cd4e4fb8c4a527f896e3b48b3d659f5a9b72caae7542d51ba2688d865ffe58615b157ebeeffe498a66ded82fff1a95ff583b287dbfeb5b3a230e9efa687ca44a93693fdfda2e18ccf21f8f042f2c83f05f77cab60a11513166a93a6a4945219440283593";
}

char* o_54832dacb65f7c6e96c8b10f0795d249(void)
{
    uint64_t uVar1;
    char bVar2;
    char bVar3;
    char bVar4;
    char *pcVar5;
    uint64_t *puVar6;
    uint64_t *puVar7;
    char *pbVar8;

    pcVar5 = getSignature();

    //puVar6 = (undefined8 *)operator.new[](0xe);
    puVar6 = (uint64_t *)malloc(0xe);

    //uVar1 = *(undefined8 *)(pcVar5 + 0x236);
    uVar1 = *(uint64_t *)(pcVar5 + 0x236);

    //*puVar6 = *(undefined8 *)(pcVar5 + 0x230);
    *puVar6 = *(uint64_t *)(pcVar5 + 0x230);

    //*(undefined8 *)((int)puVar6 + 6) = uVar1;
    *(uint64_t *)((char *)puVar6 + 6) = uVar1;

    //puVar7 = (undefined8 *)operator.new[](0xe);
    puVar7 = (uint64_t *)malloc(0xe);

    //uVar1 = *(undefined8 *)(pcVar5 + 0x389);
    uVar1 = *(uint64_t *)(pcVar5 + 0x389);

    //*puVar7 = *(undefined8 *)(pcVar5 + 899);
    *puVar7 = *(uint64_t *)(pcVar5 + 899);

    //*(undefined8 *)((int)puVar7 + 6) = uVar1;
    *(uint64_t *)((char *)puVar7 + 6) = uVar1;

    //pbVar8 = (byte *)malloc(0xe);
    pbVar8 = (char *)malloc(0xe);

    //bVar2 = *(byte *)((int)puVar6 + 1);
    bVar2 = *((char *)puVar6 + 1);

    //*pbVar8 = *(byte *)puVar6 ^ *(byte *)puVar7 ^ 0xd;
    *pbVar8 = *((char *)puVar6) ^ *((char *)puVar7) ^ 0xd;

    //bVar3 = *(byte *)((int)puVar6 + 2);
    bVar3 = *((char *)puVar6 + 2);

    //pbVar8[1] = bVar2 ^ *(byte *)((int)puVar7 + 1) ^ 0x57;
    pbVar8[1] = bVar2 ^ *((char *)puVar7 + 1) ^ 0x57;

    //bVar2 = *(byte *)((int)puVar6 + 3);
    bVar2 = *((char *)puVar6 + 3);

    //pbVar8[2] = bVar3 ^ *(byte *)((int)puVar7 + 2) ^ 7;
    pbVar8[2] = bVar3 ^ *((char *)puVar7 + 2) ^ 7;

    //bVar3 = *(byte *)((int)puVar6 + 4);
    bVar3 = *((char *)puVar6 + 4);

    //pbVar8[3] = bVar2 ^ *(byte *)((int)puVar7 + 3) ^ 0x23;
    pbVar8[3] = bVar2 ^ *((char *)puVar7 + 3) ^ 0x23;

    //bVar2 = *(byte *)((int)puVar6 + 5);
    bVar2 = *((char *)puVar6 + 5);

    //pbVar8[4] = bVar3 ^ *(byte *)((int)puVar7 + 4) ^ 0x29;
    pbVar8[4] = bVar3 ^ *((char *)puVar7 + 4) ^ 0x29;

    //bVar3 = *(byte *)((int)puVar6 + 6);
    bVar3 = *((char *)puVar6 + 6);

    //pbVar8[5] = bVar2 ^ *(byte *)((int)puVar7 + 5) ^ 0x21;
    pbVar8[5] = bVar2 ^ *((char *)puVar7 + 5) ^ 0x21;

    //bVar2 = *(byte *)((int)puVar6 + 7);
    bVar2 = *((char *)puVar6 + 7);

    //pbVar8[6] = bVar3 ^ *(byte *)((int)puVar7 + 6) ^ 0x36;
    pbVar8[6] = bVar3 ^ *((char *)puVar7 + 6) ^ 0x36;


    //bVar3 = *(byte *)(puVar6 + 1)
    bVar3 = *((char *)puVar6 + 1);

    //bVar4 = *(byte *)(puVar7 + 1);
    bVar4 = *((char *)puVar7 + 1);

    //pbVar8[7] = bVar2 ^ *(byte *)((int)puVar7 + 7) ^ 0x28;
    pbVar8[7] = bVar2 ^ *((char *)puVar7 + 7) ^ 0x28;

    //pbVar8[8] = bVar3 ^ bVar4 ^ 0x7b;
    pbVar8[8] = bVar3 ^ bVar4 ^ 0x7b;


    //pbVar8[9] = *(byte *)((int)puVar6 + 9) ^ *(byte *)((int)puVar7 + 9) ^ 0x6b;
    pbVar8[9] = *((char *)puVar6 + 9) ^ *((char *)puVar7 + 9) ^ 0x6b;

    //pbVar8[10] = *(byte *)((int)puVar6 + 10) ^ *(byte *)((int)puVar7 + 10) ^ 0x5b;
    pbVar8[10] = *((char *)puVar6 + 10) ^ *((char *)puVar7 + 10) ^ 0x5b;

    //pbVar8[0xb] = *(byte *)((int)puVar6 + 0xb) ^ *(byte *)((int)puVar7 + 0xb) ^ 0x3a;
    pbVar8[0xb] = *((char *)puVar6 + 0xb) ^ *((char *)puVar7 + 0xb) ^ 0x3a;

    //bVar2 = *(byte *)((int)puVar6 + 0xd);
    bVar2 = *((char *)puVar6 + 0xd);

    //bVar3 = *(byte *)((int)puVar7 + 0xd);
    bVar3 = *((char *)puVar7 + 0xd);

    //pbVar8[0xc] = *(byte *)((int)puVar6 + 0xc) ^ *(byte *)((int)puVar7 + 0xc) ^ 0x22;
    pbVar8[0xc] = *((char *)puVar6 + 0xc) ^ *((char *)puVar7 + 0xc) ^ 0x22;

    //pbVar8[0xd] = bVar2 ^ bVar3 ^ 0x62;
    pbVar8[0xd] = bVar2 ^ bVar3 ^ 0x62;


    return pbVar8;
}

int main()
{
    char* content = o_54832dacb65f7c6e96c8b10f0795d249();
    printf("%s", content);
    free(content);

    return 0;
}
