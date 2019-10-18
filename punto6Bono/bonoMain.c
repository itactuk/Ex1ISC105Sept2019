//
// Created by Ivan's PC on 10/13/2019.
//

#include <stdio.h>
#include <stdlib.h>

int main(){

}

struct udp_fields{
    int source_port;
    int destination;
    int udp_length;
    int checksum;
};

union udp{
    struct udp_fields fields;
    int b1_source_port:1;
    int b2_source_port:1;
    int b3_source_port:1;
    int b4_source_port:1;
    int b5_source_port:1;
    int b6_source_port:1;
    int b7_source_port:1;
    int b8_source_port:1;
    int b9_source_port:1;
    int b10_source_port:1;
    int b11_source_port:1;
    int b12_source_port:1;

    int b1_destination:1;
    int b2_destination:1;
    int b3_destination:1;
    int b4_destination:1;
    int b5_destination:1;
    int b6_destination:1;
    int b7_destination:1;
    int b8_destination:1;
    int b9_destination:1;
    int b10_destination:1;
    int b11_destination:1;
    int b12_destination:1;

    int b1_udp_length:1;
    int b2_udp_length:1;
    int b3_udp_length:1;
    int b4_udp_length:1;
    int b5_udp_length:1;
    int b6_udp_length:1;
    int b7_udp_length:1;
    int b8_udp_length:1;
    int b9_udp_length:1;
    int b10_udp_length:1;
    int b11_udp_length:1;
    int b12_udp_length:1;

    int b1_checksum:1;
    int b2_checksum:1;
    int b3_checksum:1;
    int b4_checksum:1;
    int b5_checksum:1;
    int b6_checksum:1;
    int b7_checksum:1;
    int b8_checksum:1;
    int b9_checksum:1;
    int b10_checksum:1;
    int b11_checksum:1;
    int b12_checksum:1;
};