`define REG_SIZE 64
`define S_MODE 0
`define D_MODE 1
`define NUM_OF_OPS 4
`define OP_BITS 2
`define INPUT_INTERFACE_INT_OUT 53
`define INPUT_INTERFACE_EXP_OUT 11
`define OUTPUT_INTERFACE_INT_IN 53
`define OUTPUT_INTERFACE_EXP_IN 11
`define OP_DIV_S 2'b00
`define OP_SQ_S 2'b01
`define OP_DIV_D 2'b10
`define OP_SQ_D 2'b11
`define MODE_S_SIGN_BIT 31
`define MODE_D_SIGN_BIT 63
`define MODE_D_EXP_START 62
`define MODE_D_EXP_END 52
`define MODE_S_EXP_START 30
`define MODE_S_EXP_END 23
`define MODE_S_MAN_START 22
`define MODE_S_MAN_END 0
`define MODE_D_MAN_START 51
`define MODE_D_MAN_END 0
`define MODE_S_EXP_SIZE 8


// Output Wrapper
`define M_QNAN 53'b1_1111_1111_1111_1111_1111_0111_1111_1111_1111_1111_1111_1111_1111
`define M_SNAN 53'b1
`define M_INF 53'b0
`define M_ZERO 53'b0
`define EXP_QNAN 11'b111_1111_1111
`define EXP_SNAN 11'b111_1111_1111
`define EXP_INF 11'b111_1111_1111
`define EXP_ZERO 11'b0