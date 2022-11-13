// license:BSD-3-Clause
// copyright-holders:Gaston90
#include "../mame/drivers/taito_f3.cpp"

/********************
  Hack And Homebrow
***********************/

ROM_START( cleopatrhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("e28-10_hc01.bin", 0x000000, 0x80000, CRC(20bb1f31) SHA1(48e24d0b2aa3cc06db8ccbe05e5d48e0a46de239) )
	ROM_LOAD32_BYTE("e28-09_hc01.bin", 0x000001, 0x80000, CRC(a5811b99) SHA1(0ce61e9e093f002d331a5b822b19b86fb3cc6d40) )
	ROM_LOAD32_BYTE("e28-08_hc01.bin", 0x000002, 0x80000, CRC(32f4bd9d) SHA1(8b7aa973cc4db466c791ee61633a76e5ec1f1897) )
	ROM_LOAD32_BYTE("e28-07_hc01.bin", 0x000003, 0x80000, CRC(16eab942) SHA1(b2cf401ade7280f1789c27a24046421fea5e8a94) )

	ROM_REGION(0x100000, "sprites" , 0)
	ROM_LOAD16_BYTE("e28-02_hc01.bin", 0x000000, 0x080000, CRC(1f9eda37) SHA1(9288df554eaeccbcf231fc2245d87aebf8e0c137) )
	ROM_LOAD16_BYTE("e28-01_hc01.bin", 0x000001, 0x080000, CRC(e1fab776) SHA1(933d83685d1c5585d7b5799759ce38c5df98a709) )

	EMPTY_SPRITE_HIDATA(0x080000)

	ROM_REGION(0x200000, "tilemap" , 0)
	ROM_LOAD32_WORD("e28-06_hc01.bin", 0x000000, 0x100000, CRC(07f83157) SHA1(b39edbb4de4790b808a4be7d0761b7666006e6b4) )
	ROM_LOAD32_WORD("e28-05_hc01.bin", 0x000002, 0x100000, CRC(e40904c9) SHA1(90291ca27a592adf493a459a89cb43b166857157) )

	ROM_REGION( 0x100000, "tilemap_hi", 0 )
	ROM_LOAD       ("e28-04.bin", 0x000000, 0x100000, CRC(57aef029) SHA1(5c07209015d4749d1ffb3e9c1a890e6cfeec8cb0) )

	ROM_REGION(0x140000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("e28-11.bin", 0x100000, 0x20000, CRC(01a06950) SHA1(94d22cd839f9027e9d45264c366e0cb5d698e0b6) )
	ROM_LOAD16_BYTE("e28-12.bin", 0x100001, 0x20000, CRC(dc19260f) SHA1(fa0ca03a236326652e4f9898d07cd837c1507a9d) )

	ROM_REGION16_BE(0x400000, "ensoniq.0" , ROMREGION_ERASE00 ) // V2: 4 banks, only 1 populated
	ROM_LOAD16_BYTE("e28-03.bin", 0x000000, 0x200000, CRC(15c7989d) SHA1(7cc63d93e5c1f9f52f889e973bbefd5e6f7ce807) )
ROM_END

ROM_START( akkanvdrhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("e06-14h_c01.20", 0x000000, 0x20000, CRC(f1f71f95) SHA1(b0d44fb3972f3b844855a9778df2d4bd026e5403) )
	ROM_LOAD32_BYTE("e06-13h_c01.19", 0x000001, 0x20000, CRC(5e94d31b) SHA1(631607d4283dbbb9c8e6b3a71d742ef8f24887c5) )
	ROM_LOAD32_BYTE("e06-12h_c01.18", 0x000002, 0x20000, CRC(eccc4cc4) SHA1(1d7317c8c58db9e4a95b3eed4474e8c04ece7444) )
	ROM_LOAD32_BYTE("e06-11h_c01.17", 0x000003, 0x20000, CRC(ee3e952d) SHA1(5fd7db1bcb060b2efcb8ab0805f8e15c456cfb2c) )

	ROM_REGION(0x200000, "sprites" , 0)
	ROM_LOAD16_BYTE("e06-03_hc01", 0x000000, 0x100000, CRC(6565b5c7) SHA1(5dc548dfd498ef6771b942168eb6d7d6e262912c) )
	ROM_LOAD16_BYTE("e06-02_hc01", 0x000001, 0x100000, CRC(eae1fe61) SHA1(90f9477883ae3d4f7a2947acf748de4364b63384) )

	ROM_REGION( 0x100000, "sprites_hi", 0 )
	ROM_LOAD       ("e06-01_hc01", 0x000000, 0x100000, CRC(b2091836) SHA1(a849fbe0f6db36e76ca20de7f5b96bd60a139905) )

	ROM_REGION(0x200000, "tilemap" , 0)
	ROM_LOAD32_WORD("e06-08_hc01", 0x000000, 0x100000, CRC(882c4fe4) SHA1(f5b80d498fcd42725b8c96afdfb2cb7e0a4195fb) )
	ROM_LOAD32_WORD("e06-07_hc01", 0x000002, 0x100000, CRC(c11cd737) SHA1(d597b53ad7739665fd4265177719fc57a1af0199) )

	ROM_REGION( 0x100000, "tilemap_hi", 0 )
	ROM_LOAD       ("e06-06_hc01", 0x000000, 0x100000, CRC(c1cd5367) SHA1(0560f033169145f12d80211e4210399abda2a0e5) )

	ROM_REGION(0x180000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("e06-09.32", 0x100000, 0x40000, CRC(9bcafc87) SHA1(10b3f6da00a41550fe6a705232f0e33fda3c7e7c) )
	ROM_LOAD16_BYTE("e06-10.33", 0x100001, 0x40000, CRC(b752b61f) SHA1(e948a8af19c70ba8b8e908c869bc88ed0cac8420) )

	ROM_REGION16_BE(0x800000, "ensoniq.0" , ROMREGION_ERASE00 )
	ROM_LOAD16_BYTE("e06-04", 0x000000, 0x200000, CRC(1dac29df) SHA1(ed68a41def148dcf4057cfac87a2a563c6882e1d) )
	ROM_LOAD16_BYTE("e06-05", 0x400000, 0x200000, CRC(f370ff15) SHA1(4bc464d1c3a28326c8b1ae2036387954cb1dd813) )
ROM_END

ROM_START( arabianmhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("d29-23_hc01.ic40", 0x000000, 0x40000, CRC(dd54b8ed) SHA1(2584ae22e52d2f5990cf0857ddd5707f8df4beb0) )
	ROM_LOAD32_BYTE("d29-22_hc01.ic38", 0x000001, 0x40000, CRC(4605b9e1) SHA1(0d050754c37fdab7596385daf242054d50882872) )
	ROM_LOAD32_BYTE("d29-21_hc01.ic36", 0x000002, 0x40000, CRC(b3b115c1) SHA1(31a7abf491c8cc568415d8684584137041c7c6b9) )
	ROM_LOAD32_BYTE("d29-20_hc01.ic34", 0x000003, 0x40000, CRC(e2725176) SHA1(fe738d76efd491cf449909470a5c7f5023de6e38) )

	ROM_REGION(0x200000, "sprites" , 0)
	ROM_LOAD16_BYTE("d29-03_hc01.ic66", 0x000000, 0x100000, CRC(281fd530) SHA1(6db5095ae49b12709086010fa112500e45901081) )
	ROM_LOAD16_BYTE("d29-04_hc01.ic67", 0x000001, 0x100000, CRC(29dc7a2d) SHA1(2cf49f7680fead656f474442a4f0c8fd403d79a1) )

	ROM_REGION( 0x100000, "sprites_hi", 0 )
	ROM_LOAD       ("d29-05_hc01.ic68", 0x000000, 0x100000, CRC(445b2514) SHA1(2fd20bab02bd0bf242ef6c35ea2dc65c0e44ee91) )

	ROM_REGION(0x100000, "tilemap" , 0)
	ROM_LOAD32_WORD("d29-06_hc01.ic49", 0x000000, 0x080000, CRC(7dc3841a) SHA1(fb13be3adf2d6eea628cda3b374c7c42766dfb76) )
	ROM_LOAD32_WORD("d29-07_hc01.ic50", 0x000002, 0x080000, CRC(1716b706) SHA1(629698dcc7be88dffb70a9eb065542b7f2848812) )

	ROM_REGION( 0x080000, "tilemap_hi", 0 )
	ROM_LOAD       ("d29-08_hc01.ic51", 0x000000, 0x080000, CRC(531ef983) SHA1(89d072c285677f35ca3564f7dc4018e2f0410ee6) )

	ROM_REGION(0x140000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("d29-18.ic5", 0x100000, 0x20000, CRC(d97780df) SHA1(d0f9d2fd7ce13f620bb44083bf012f67dda4b10b) )
	ROM_LOAD16_BYTE("d29-19.ic6", 0x100001, 0x20000, CRC(b1ad365c) SHA1(1cd26d8feaaa06b50dfee32e9b7950b8ee92ac55) )

	ROM_REGION16_BE(0x800000, "ensoniq.0" , ROMREGION_ERASE00 )
	ROM_LOAD16_BYTE("d29-01.ic17", 0x000000, 0x200000, CRC(545ac4b3) SHA1(f89513fca8a03cab11160aa1f0a9c3adbc8bda08) )
	ROM_LOAD16_BYTE("d29-02.ic18", 0x600000, 0x100000, CRC(ed894fe1) SHA1(5bf2fb6abdcf25bc525a2c3b29dbf7aca0b18fea) )

	ROM_REGION( 0x1200, "plds", 0 )
	ROM_LOAD( "d29-11.ic15.bin", 0x0000, 0x0157, CRC(5dd5c8f9) SHA1(5e6153d9e08985b2326dfd6d73f7b90136a7a4b1) )
	ROM_LOAD( "pal20l8b.2",      0x0200, 0x0144, CRC(c91437e2) SHA1(5bd6fb57fd7e0ff957a6ef9509b8f2e35a8ca29a) )
	ROM_LOAD( "d29-13.ic14.bin", 0x0400, 0x0157, CRC(74d61d36) SHA1(c34d8b2d227f69c167d1516dea53e4bcb76491d1) )
	ROM_LOAD( "palce16v8h.11",   0x0600, 0x0117, CRC(51088324) SHA1(b985835b92c9d1e1dae6ae7cba9fa83c4db58bbb) )
	ROM_LOAD( "pal16l8b.22",     0x0800, 0x0104, CRC(3e01e854) SHA1(72f48982673ac8337dac3358b7a79e45c60b9601) )
	ROM_LOAD( "palce16v8h.31",   0x0a00, 0x0117, CRC(e0789727) SHA1(74add02cd194741de5ca6e36a99f9dd3e756fbdf) )
	ROM_LOAD( "pal16l8b.62",     0x0c00, 0x0104, CRC(7093e2f3) SHA1(62bb0085ed93cc8a5fb3a1b08ce9c8071ebda657) )
	ROM_LOAD( "d29-14.ic28.bin", 0x0e00, 0x0157, CRC(25d205d5) SHA1(8859fd498e4d84a55424899d23db470be217eaba) )
	ROM_LOAD( "pal20l8b.70",     0x1000, 0x0144, CRC(92b5b97c) SHA1(653ab0467f71d93eceb8143b124cdedaf1ede750) )
ROM_END

ROM_START( bubsymphhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("d90_hc01-12", 0x000000, 0x40000, CRC(1ae40f57) SHA1(56cfcfc69b0f29a2f13745f47462dd442c422260) )
	ROM_LOAD32_BYTE("d90_hc01-11", 0x000001, 0x40000, CRC(bc2ad86a) SHA1(3bbc20396fa328901747dcd6c88cf2a90e852ccb) )
	ROM_LOAD32_BYTE("d90_hc01-10", 0x000002, 0x40000, CRC(db7c9cc2) SHA1(11786688b5525b0429532e53580e93dba2afd18a) )
	ROM_LOAD32_BYTE("d90_hc01-09", 0x000003, 0x40000, CRC(20a5f8a1) SHA1(50070b30c166350b397bec3ffc4038adcb3289b5) )

	ROM_REGION(0x200000, "sprites" , 0)
	ROM_LOAD16_BYTE("d90_hc01-03", 0x000000, 0x100000, CRC(9e610be0) SHA1(d8663197e052c17f6cd507a9e0fc5be53060b483) )
	ROM_LOAD16_BYTE("d90_hc01-02", 0x000001, 0x100000, CRC(881e91a1) SHA1(3e273c831b1d620bfc97d803636988d397b494ad) )

	ROM_REGION( 0x100000, "sprites_hi", 0 )
	ROM_LOAD       ("d90_hc01-01", 0x000000, 0x100000, CRC(4a577d64) SHA1(37acf59c3d3dd2fe9dda30c30cbbc4cad548af8f) )

	ROM_REGION(0x200000, "tilemap" , 0)
	ROM_LOAD32_WORD("d90_hc01-08", 0x000000, 0x100000, CRC(f57f521d) SHA1(7e40352dc6a5d2423d79e5d4ebe8b70b66c94fe8) )
	ROM_LOAD32_WORD("d90_hc01-07", 0x000002, 0x100000, CRC(fe765764) SHA1(a8c466eac3516468ff694b6a487ae7722f373a50) )

	ROM_REGION( 0x100000, "tilemap_hi", 0 )
	ROM_LOAD       ("d90_hc01-06", 0x000000, 0x100000, CRC(f3a70b9c) SHA1(5fd676db3783dbd905b53b0e9e6199371dca88a7) )

	ROM_REGION(0x180000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("d90-13.ic32", 0x100000, 0x40000, CRC(6762bd90) SHA1(771db0382bc8dab2caf13d0fc20648366c685829) )
	ROM_LOAD16_BYTE("d90-14.ic33", 0x100001, 0x40000, CRC(8e33357e) SHA1(68b81693c22e6357e37244f2a416818a81338138) )

	ROM_REGION16_BE(0x800000, "ensoniq.0" , ROMREGION_ERASE00 )
	ROM_LOAD16_BYTE("d90-04", 0x000000, 0x200000, CRC(feee5fda) SHA1(b89354013ec4d34bcd51ecded412effa66dd2f2f) )
	ROM_LOAD16_BYTE("d90-05", 0x400000, 0x200000, CRC(c192331f) SHA1(ebab05b3681c70b373bc06c1826be1cc397d3af7) )

	ROM_REGION( 0x0a00, "plds", 0 )
	ROM_LOAD( "pal16l8a-d77-09.bin",   0x0000, 0x0104, CRC(b371532b) SHA1(7f875f380e69d14326a036a09d2fda7554b73664) )
	ROM_LOAD( "pal16l8a-d77-10.bin",   0x0200, 0x0104, CRC(42f59227) SHA1(1f0db7489b49c00603ea51d130c9dfc237545390) )
	ROM_LOAD( "palce16v8q-d77-11.bin", 0x0400, 0x0117, CRC(eacc294e) SHA1(90679d523d90c1f8d2ecbd7b6fac2861f94cf107) )
	ROM_LOAD( "palce16v8q-d77-12.bin", 0x0600, 0x0117, CRC(e9920cfe) SHA1(58b73fe65f118d57fdce56d781593fc70c797f1b) )
	ROM_LOAD( "palce16v8q-d77-14.bin", 0x0800, 0x0117, CRC(7427e777) SHA1(e692cedb13e5bc02edc4b25e9dcea51e6715de85) )
ROM_END

ROM_START( elvactrhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("e02-12_hc01.20", 0x000000, 0x80000, CRC(eaaefe10) SHA1(d13e41ea42fd3d7915a1391925a1029c88c40b12) )
	ROM_LOAD32_BYTE("e02-11_hc01.19", 0x000001, 0x80000, CRC(990c1409) SHA1(3922137958d54715941c612425567f23e74d17ae) )
	ROM_LOAD32_BYTE("e02-10_hc01.18", 0x000002, 0x80000, CRC(b9a54080) SHA1(0999662fed8c36d96186114384d68dc9251b9262) )
	ROM_LOAD32_BYTE("e02-09_hc01.17", 0x000003, 0x80000, CRC(7fb5f049) SHA1(a40a79c06a855695769cd5e59729be85dd74c7b1) )

	ROM_REGION(0x400000, "sprites", 0 )
	ROM_LOAD16_BYTE("e02-03_hc01.12", 0x000000, 0x200000, CRC(86ec9f36) SHA1(d989742bdd9237fa37730090ceb2324c83c1675f) )
	ROM_LOAD16_BYTE("e02-02_hc01.8",  0x000001, 0x200000, CRC(3484fa1d) SHA1(06573ac3738dbceb7812cd0666f1b5fd24fb65c1) )

	ROM_REGION( 0x200000, "sprites_hi", 0 )
	ROM_LOAD       ("e02-01_hc01.4",  0x000000, 0x200000, CRC(9dd378b7) SHA1(9f9a08da225288287993ddcd165d442a777d1af6) )

	ROM_REGION(0x400000, "tilemap", 0 )
	ROM_LOAD32_WORD("e02-08_hc01.47", 0x000000, 0x200000, CRC(e884fad1) SHA1(b95f53b1a413fe39b83ec850b45366c4fd8cadf5) )
	ROM_LOAD32_WORD("e02-07_hc01.45", 0x000002, 0x200000, CRC(b1553a44) SHA1(12d8f008bb3311c9de529d459a5e4e3c256ba1ae) )

	ROM_REGION( 0x200000, "tilemap_hi", 0 )
	ROM_LOAD       ("e02-06_hc01.43", 0x000000, 0x200000, CRC(44ef81a0) SHA1(e7a32fe6302a12d5cc061671ad192fbadd4cdec6) )

	ROM_REGION(0x180000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("e02-13.32", 0x100000, 0x40000, CRC(80932702) SHA1(c468234d03aa31b2aa0c3bd6bec32034216c2ae4) )
	ROM_LOAD16_BYTE("e02-14.33", 0x100001, 0x40000, CRC(706671a5) SHA1(1ac90647d617e73f12a67274a025ae43a6b3a316) )

	ROM_REGION16_BE(0x800000, "ensoniq.0" , ROMREGION_ERASE00 )
	ROM_LOAD16_BYTE("e02-04.38", 0x000000, 0x200000, CRC(b74307af) SHA1(deb42415049efa2df70e7b25ba8b1b716aa227f1) )
	ROM_LOAD16_BYTE("e02-05.39", 0x400000, 0x200000, CRC(eb729855) SHA1(85253efe794e8b5ffaf16bcb1123bca831e776a5) )
ROM_END

ROM_START( gekiridnhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("e11-12_hc01.bin", 0x000000, 0x40000, CRC(448308ce) SHA1(22eac25158bd3a0349aa4f1f041473b93030ee43) )
	ROM_LOAD32_BYTE("e11-11_hc01.bin", 0x000001, 0x40000, CRC(8ae457c4) SHA1(f1d74d99c916df90a74be0ff80b05b0f31284306) )
	ROM_LOAD32_BYTE("e11-10_hc01.bin", 0x000002, 0x40000, CRC(b1ff4529) SHA1(9e8366d9d90ad4155aab3828523daff09e3d400d) )
	ROM_LOAD32_BYTE("e11-09_hc01.bin", 0x000003, 0x40000, CRC(24d884ff) SHA1(35ddb21608c781a0674a4244c8e5c0aa6dc220eb) )

	ROM_REGION(0x400000, "sprites" , 0)
	ROM_LOAD16_BYTE("e11-03_hc01.bin", 0x000000, 0x200000, CRC(2b0dab58) SHA1(7c70a2104fbbfde32fa006bfafe30c3d9708cb10) )
	ROM_LOAD16_BYTE("e11-02_hc01.bin", 0x000001, 0x200000, CRC(a2c4fa4f) SHA1(2ad73ce8431f1199dd32df83352dc4f85345529f) )

	ROM_REGION( 0x200000, "sprites_hi", 0 )
	ROM_LOAD       ("e11-01_hc01.bin", 0x000000, 0x200000, CRC(e19874b3) SHA1(a8d6806133977a7decefafff5d7b249803add70b) )

	ROM_REGION(0x400000, "tilemap" , 0)
	ROM_LOAD32_WORD("e11-08_hc01.bin", 0x000000, 0x200000, CRC(93884253) SHA1(6d0530db64c84bf7b2ad47e94036ecd8c81418b6) )
	ROM_LOAD32_WORD("e11-07_hc01.bin", 0x000002, 0x200000, CRC(15ca8ac2) SHA1(33cbcc96e5144e5910c67c99815958d8f004287e) )

	ROM_REGION( 0x200000, "tilemap_hi", 0 )
	ROM_LOAD       ("e11-06_hc01.bin", 0x000000, 0x200000, CRC(0acc71d3) SHA1(455c70ec8f1087189170160d5683545bbea1fe9a) )

	ROM_REGION(0x140000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("e11-13.bin",  0x100000, 0x20000, CRC(51a11ff7) SHA1(c03042489d71423667f25856d15aa6a363ea6c92) )
	ROM_LOAD16_BYTE("e11-14.bin",  0x100001, 0x20000, CRC(dce2ba91) SHA1(00bc353c7747a7954365b587d7bc759ee5dc09c2) )

	ROM_REGION16_BE(0x800000, "ensoniq.0" , ROMREGION_ERASE00 )
	ROM_LOAD16_BYTE("e11-04.ic38", 0x000000, 0x200000, CRC(e0ff4fb1) SHA1(81e186e3a692af1da316b8085a729c4f103d9a52) )
	ROM_LOAD16_BYTE("e11-05.ic41", 0x400000, 0x200000, CRC(a4d08cf1) SHA1(ae2cabef7b7bcb8a788988c73d7af6fa4bb2c444) )
ROM_END

ROM_START( gseekerhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("d40_12_hc01.rom", 0x000000, 0x40000, CRC(63894ca7) SHA1(2d8821a088c7d2cfc1a4d117b723d5a40c2a12b6) )
	ROM_LOAD32_BYTE("d40_11_hc01.rom", 0x000001, 0x40000, CRC(287358f1) SHA1(a57f53b7093d5db856f136bb11be3508133559a7) )
	ROM_LOAD32_BYTE("d40_10_hc01.rom", 0x000002, 0x40000, CRC(af11d645) SHA1(fe5b8068b6263ece28892efa51bd0e2b0df5bb50) )
	ROM_LOAD32_BYTE("d40-09_hc01.34",  0x000003, 0x40000, CRC(2d8f3978) SHA1(f9d6548b44f33017430d31c94756e2b5516e492b) )

	ROM_REGION(0x200000, "sprites" , 0)
	ROM_LOAD16_BYTE("d40_03_hc01.rom", 0x000000, 0x100000, CRC(644f60c1) SHA1(9af611a3efb115bab17b7aa4f4c87ede1426731d) )
	ROM_LOAD16_BYTE("d40_04_hc01.rom", 0x100001, 0x080000, CRC(23a6a9e1) SHA1(ecf1ff6a21991d3596a3a6924134f4ebb8a996fd) )
	ROM_CONTINUE(0,0x80000)
	ROM_LOAD16_BYTE("d40_15_hc01.rom", 0x000000, 0x080000, CRC(277f6629) SHA1(4f8c1dc9c2c62da52212dfde40d03c40672eed1a) )
	ROM_LOAD16_BYTE("d40_16_hc01.rom", 0x000001, 0x080000, CRC(ec221d06) SHA1(d524c990e4c81d12fa82792064944e9f76c9df08) )

	EMPTY_SPRITE_HIDATA(0x100000)

	ROM_REGION(0x200000, "tilemap" , 0)
	ROM_LOAD32_WORD("d40_05_hc01.rom", 0x000000, 0x100000, CRC(b30e97e2) SHA1(ba187ac7f0cc1904adc75350dd2d6fc1cee0b0ce) )
	ROM_LOAD32_WORD("d40_06_hc01.rom", 0x000002, 0x100000, CRC(5a5c7d5a) SHA1(4f37c3ece53eb9f94b49fd2b215101a72a7055d0) )

	EMPTY_TILEMAP_HIDATA(0x100000)

	ROM_REGION(0x140000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("d40_07.rom", 0x100000, 0x20000, CRC(7e9b26c2) SHA1(d88ad39a9d70b4a5bd3f83e0d4d0725f659f1d2a) )
	ROM_LOAD16_BYTE("d40_08.rom", 0x100001, 0x20000, CRC(9c926a28) SHA1(9d9ee75eb895edc381c3ab4df5af941f84cd2073) )

	ROM_REGION16_BE(0x800000, "ensoniq.0" , ROMREGION_ERASE00 )
	ROM_LOAD16_BYTE("d40_01.rom", 0x000000, 0x200000, CRC(ee312e95) SHA1(885553950c2b2195d664639bf7e0d1ffa3e8346a) )
	ROM_LOAD16_BYTE("d40_02.rom", 0x600000, 0x100000, CRC(ed894fe1) SHA1(5bf2fb6abdcf25bc525a2c3b29dbf7aca0b18fea) )
ROM_END

ROM_START( landmakrhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("e61-13_hc01.20", 0x000000, 0x80000, CRC(ff7afcc8) SHA1(a3c8d1c3987c3266c62c056656fd3ea456749080) )
	ROM_LOAD32_BYTE("e61-12_hc01.19", 0x000001, 0x80000, CRC(2be4297d) SHA1(fb1ab2e39755317ebf084df349fa0ab6a641d7e2) )
	ROM_LOAD32_BYTE("e61-11_hc01.18", 0x000002, 0x80000, CRC(dbc10844) SHA1(2cf377cad0837cc3a25a679a6fe41beff38b20b4) )
	ROM_LOAD32_BYTE("e61-10_hc01.17", 0x000003, 0x80000, CRC(42d37d39) SHA1(adb10fcd33a7d8daef111405b596858fe2da6452) )

	ROM_REGION(0x400000, "sprites" , 0)
	ROM_LOAD16_BYTE("e61-03_hc01.12",0x000000, 0x200000, CRC(08e6acb4) SHA1(1edaf0810682f6e3932a69942c4a83169329baf1) )
	ROM_LOAD16_BYTE("e61-02_hc01.08",0x000001, 0x200000, CRC(e2f9d072) SHA1(bf47ad233d6cceb552b8e5efadb5130f2529a59f) )

	ROM_REGION( 0x200000, "sprites_hi", 0 )
	ROM_LOAD       ("e61-01_hc01.04",0x000000, 0x200000, CRC(cb6b638c) SHA1(eceea8404f71aaaf8b81aaa6601967d130cb9fd2) )

	ROM_REGION(0x400000, "tilemap" , 0)
	ROM_LOAD32_WORD("e61-09_hc01.47", 0x000000, 0x200000, CRC(d2e78354) SHA1(3a6e67da77970a69051828a4fb82131d74b5595e) )
	ROM_LOAD32_WORD("e61-08_hc01.45", 0x000002, 0x200000, CRC(831bf12a) SHA1(41ac84ff13454caf9eec29a01e974123e2eb8e54) )

	ROM_REGION( 0x200000, "tilemap_hi", 0 )
	ROM_LOAD       ("e61-07.43", 0x000000, 0x200000, CRC(4a57965d) SHA1(8e80788e0f47fb242da9af3aa19077dc0ec829b8) )

	ROM_REGION(0x140000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("eh61-14.32", 0x100000, 0x20000, CRC(b905f4a7) SHA1(613b954e3e129fd44b4ce64958f16e5636012d6e) )
	ROM_LOAD16_BYTE("eh61-15.33", 0x100001, 0x20000, CRC(87909869) SHA1(7b90c23899a673966cac3352d375d17b83e66596) )

	ROM_REGION16_BE(0x1000000, "ensoniq.0" , ROMREGION_ERASE00 )
	ROM_LOAD16_BYTE("e61-04.38", 0x400000, 0x200000, CRC(c27aec0c) SHA1(e95da2db07a20a53662ebd45c033966e8a22a15a) )
	ROM_LOAD16_BYTE("e61-05.39", 0x800000, 0x200000, CRC(83920d9d) SHA1(019e39ae85d1129f6d3b8460c4b1bd925f868ee2) )
	ROM_LOAD16_BYTE("e61-06.40", 0xc00000, 0x200000, CRC(2e717bfe) SHA1(1be54cd2ec65d8fd49a5c09b5d27791fd7a320d4) )
ROM_END

ROM_START( lightbrhc01 )
	ROM_REGION(0x200000, "maincpu", 0)
	ROM_LOAD32_BYTE("d69-20_hc01.bin", 0x000000, 0x80000, CRC(5b29e745) SHA1(a20ffaf53cb7572217ad5e92d3641927b1998eab) )
	ROM_LOAD32_BYTE("d69-13_hc01.bin", 0x000001, 0x80000, CRC(0764221f) SHA1(1465f51396348c12c7d272232699eb69bd46bf9b) )
	ROM_LOAD32_BYTE("d69-15_hc01.bin", 0x000002, 0x80000, CRC(66c3a572) SHA1(122bdab9becdd2df0f43c2a34e079cf1625159b9) )
	ROM_LOAD32_BYTE("d69-14_hc01.bin", 0x000003, 0x80000, CRC(c1588074) SHA1(0e5c1677f89953791837d1293cc924cfa7fe54e5) )

	ROM_REGION(0x600000, "sprites" , 0)
	ROM_LOAD16_BYTE("d69-06.bin", 0x000000, 0x200000, CRC(cb4aac81) SHA1(15d315c6b9695cc2fe07defc67c7a4fb26de1950) )
	ROM_LOAD16_BYTE("d69-07.bin", 0x000001, 0x200000, CRC(b749f984) SHA1(39fd662bdc42e812519181a640a83e29e300826a) )
	ROM_LOAD16_BYTE("d69-09_hc01.bin", 0x400000, 0x100000, CRC(dbac0bf3) SHA1(ff17a43fc0b2f6b41b8394ad00e00b2683e2287a) )
	ROM_LOAD16_BYTE("d69-10_hc01.bin", 0x400001, 0x100000, CRC(50673c49) SHA1(62f3fa18c39c0149ec021c5617d2989d546550aa) )

	ROM_REGION( 0x300000, "sprites_hi", 0 )
	ROM_LOAD       ("d69-08.bin", 0x000000, 0x200000, CRC(5b68d7d8) SHA1(f2ee3dd7100a3c9d8f402fe36dae2bc66cb17be3) )
	ROM_LOAD       ("d69-11_hc01.bin", 0x200000, 0x100000, CRC(1988fb12) SHA1(790bfaf765bad2665381b6b752d2c26c010b4e4e) )

	ROM_REGION(0x400000, "tilemap" , 0)
	ROM_LOAD32_WORD("d69-03_hc01.bin", 0x000000, 0x200000, CRC(36fab42f) SHA1(6e3f78eda7aaa3b565b495dfe4b40a5abb3c3449) )
	ROM_LOAD32_WORD("d69-04_hc01.bin", 0x000002, 0x200000, CRC(4a63f543) SHA1(37748b843bb001a4ceb5f10e3a3ab409d242395f) )

	ROM_REGION( 0x200000, "tilemap_hi", 0 )
	ROM_LOAD       ("d69-05_hc01.bin", 0x000000, 0x200000, CRC(f84c9c40) SHA1(2e1945ecd904d41d4bca9fbde0083b0c78037b2f) )

	ROM_REGION(0x140000, "taito_en:audiocpu", 0)
	ROM_LOAD16_BYTE("d69-18.bin", 0x100000, 0x20000, CRC(04600d7b) SHA1(666cfab09b61fd6e0bc4ff277018ebf1cda01b0e) )
	ROM_LOAD16_BYTE("d69-19.bin", 0x100001, 0x20000, CRC(1484e853) SHA1(4459c18ba005786483c652857e527c6093efb036) )

	ROM_REGION16_BE(0x800000, "ensoniq.0" , ROMREGION_ERASE00 )
	ROM_LOAD16_BYTE("d69-01.bin", 0x000000, 0x200000, CRC(9ac93ac2) SHA1(1c44f6ba95505f85b0c8a90395f09d2a49da3553) )
	ROM_LOAD16_BYTE("d69-02.bin", 0x400000, 0x200000, CRC(dce28dd7) SHA1(eacfc98349b0608fc1a944c11f0483fb6caa4445) )
ROM_END

ROM_START( pbobble3hc01 ) //pbobble3rc
	ROM_REGION( 0x200000, "maincpu", 0 )
	ROM_LOAD32_BYTE("e29-12_hc01.rom", 0x000000, 0x80000, CRC(c22eda63) SHA1(f6968fea221608bd210fae8fa6fd80045def9fe0) )
	ROM_LOAD32_BYTE("e29-11_hc01.rom", 0x000001, 0x80000, CRC(531e2891) SHA1(5ce0708ddba9d900b755e842c1d5a9e67986c52d) )
	ROM_LOAD32_BYTE("e29-10_hc01.rom", 0x000002, 0x80000, CRC(ba599730) SHA1(7611fbe426d5c9fcd0d0346d57bd44a98035d1b2) )
	ROM_LOAD32_BYTE("e29-16_hc01.rom", 0x000003, 0x80000, CRC(412e7ca4) SHA1(84f5616397832855c16e0c6a635a6f08e908f87e) )

	ROM_REGION( 0x200000, "sprites" , 0 )
	ROM_LOAD16_BYTE("e29-02.rom", 0x000000, 0x100000, CRC(437391d3) SHA1(b3cc64c68553d37e0bd09e0dece14901d8df5866) )
	ROM_LOAD16_BYTE("e29-01.rom", 0x000001, 0x100000, CRC(52547c77) SHA1(d0cc8b8915cec1506c9733a1ce1638038ea93d25) )

	EMPTY_SPRITE_HIDATA(0x100000)

	ROM_REGION( 0x200000, "tilemap" , 0 )
	ROM_LOAD32_WORD("e29-08.rom", 0x000000, 0x100000, CRC(7040a3d5) SHA1(ea284ec530aac20348f84122e38a508bbc283f44) )
	ROM_LOAD32_WORD("e29-07.rom", 0x000002, 0x100000, CRC(fca2ea9b) SHA1(a87ebedd0d16657288df434a70b8933fafe0ca25) )

	ROM_REGION( 0x100000, "tilemap_hi", 0 )
	ROM_LOAD       ("e29-06.rom", 0x000000, 0x100000, CRC(c16184f8) SHA1(ded417d9d116b5a2f7518fa404bc2dda1c6a6366) )

	ROM_REGION( 0x180000, "taito_en:audiocpu", 0 )
	ROM_LOAD16_BYTE("e29-13.rom", 0x100000, 0x40000, CRC(1ef551ef) SHA1(527defe8f35314304adb4b483285b08cd6ebe865) )
	ROM_LOAD16_BYTE("e29-14.rom", 0x100001, 0x40000, CRC(7ee7e688) SHA1(d65aa9c449e1d64f10d1be9727a9d93ab1571e65) )

	ROM_REGION16_BE( 0x1000000, "ensoniq.0" , ROMREGION_ERASE00 )

	ROM_LOAD16_BYTE("e29-03.rom", 0x400000, 0x200000, CRC(a4371658) SHA1(26510a3f6de97f49b10dfc5cb9b7da947a44bfcb) )
	ROM_LOAD16_BYTE("e29-04.rom", 0x800000, 0x200000, CRC(d1f42457) SHA1(2c77be6365deb5ef215da0c66da23b415623bdb1) )
	ROM_LOAD16_BYTE("e29-05.rom", 0xc00000, 0x200000, CRC(e33c1234) SHA1(84c336ed6fd8723e824889fe7b52c284be659e62) )
ROM_END

/*    YEAR      NAME            PARENT   MACHINE  INPUT                     INIT      MONITOR COMPANY         FULLNAME FLAGS */
// Hack/Homebrow
GAME( 1996, cleopatrhc01,       cleopatr, f3_224a,  f3, taito_f3_state, init_cleopatr, ROT0,   "hack",         "Cleopatra Fortune (Translation Chinese)", 0 )
GAME( 1995, akkanvdrhc01,       spcinv95, f3_224a,  f3, taito_f3_state, init_spcinv95, ROT270, "hack",         "Akkanbeder (Translation Chinese)", 0 )
GAME( 2017, arabianmhc01,       arabianm, f3_224a,  f3, taito_f3_state, init_arabianm, ROT0,   "hack",         "Arabian Magic (Translation Chinese)", 0 )
GAME( 1994, bubsymphhc01,       bublbob2, f3_224a,  f3, taito_f3_state, init_bubsymph, ROT0,   "hack",         "Bubble Symphony (Translation Chinese)", 0 )
GAME( 1994, elvactrhc01,        elvactr,  f3,       f3, taito_f3_state, init_elvactr,  ROT0,   "hack",         "Elevator Action Returns (Translation Chinese)", 0 )
GAME( 1995, gekiridnhc01,       gekiridn, f3,       f3, taito_f3_state, init_gekirido, ROT270, "hack",         "Gekirindan (Translation Chinese)", 0 )
GAME( 1992, gseekerhc01,        gseeker,  f3_224b_eeprom, f3, taito_f3_state, init_gseeker,  ROT90,  "hack",   "Grid Seeker: Project Storm Hammer (Translation Chinese)", 0 )
GAME( 1998, landmakrhc01,       landmakr, f3,       f3, taito_f3_state, init_landmakr, ROT0,   "hack",         "Land Maker (Translation Chinese)", 0 )
GAME( 2017, lightbrhc01,        lightbr,  f3_224a,  f3, taito_f3_state, init_lightbr,  ROT0,   "hack",         "Light Bringer (Translation Chinese)", 0 )
GAME( 2022, pbobble3hc01,       pbobble3, f3,       f3, taito_f3_state, init_pbobble3, ROT0,   "hack",         "Puzzle Bobble 3 (Compulsory Battle Edition 2022-08-09)", 0 )
