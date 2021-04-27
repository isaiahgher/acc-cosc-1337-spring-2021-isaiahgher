//cpp

void populate_time_table(int times_table[COLS], int ROW);
{
    for(int i=0; i<ROW; ++i)
    {
        for(int j=0; j<COLS; ++j)
        {
            times_table[i][j]=(i+1)*(j+1);
        }
    }
}