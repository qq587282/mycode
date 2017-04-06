/*
2字节的byte转short常见于h5 websocket接口

*/
short byte2_to_short(byte strbyte)
{
  short n_c_cmd = 0;
	n_c_cmd |= (strbyte[0] & 0x00ff);
	n_c_cmd <<= 8;
	n_c_cmd |= (strbyte[1] & 0x00ff);
  return   n_c_cmd;
}
