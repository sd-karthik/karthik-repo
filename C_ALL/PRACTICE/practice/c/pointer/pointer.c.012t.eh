
;; Function main (main)

main ()
{
  int a;
  int D.1693;
  const char * restrict D.1692;

  fun ();
  a = 5;
  D.1692 = (const char * restrict) &"%d\n"[0];
  printf (D.1692, a);
  D.1693 = 0;
  goto <D.1694>;
  <D.1694>:
  return D.1693;
}



;; Function fun (fun)

fun ()
{
  int b[2];
  int c;
  int a[1];
  const char * restrict D.1704;
  int D.1703;
  int D.1702;
  int D.1701;
  int a.3;
  int b.2;
  int D.1698;
  int D.1697;
  int a.1;
  int b.0;

  a[0] = 6;
  c = 4;
  b[0] = 5;
  b[1] = 7;
  b.0 = (int) &b;
  a.1 = (int) &a;
  D.1697 = b.0 - a.1;
  D.1698 = D.1697 /[ex] 4;
  b[D.1698] = 3;
  b.2 = (int) &b;
  a.3 = (int) &a;
  D.1701 = b.2 - a.3;
  D.1702 = D.1701 /[ex] 4;
  D.1703 = b[D.1702];
  D.1704 = (const char * restrict) &"%d\n"[0];
  printf (D.1704, D.1703);
  goto <D.1705>;
  <D.1705>:
  return;
}

