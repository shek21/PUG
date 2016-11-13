/**
 * 
 */
package org.gprom.jdbc.metadata_lookup.sqlite;

import java.sql.Connection;
import java.sql.SQLException;

import org.apache.log4j.Logger;
import org.gprom.jdbc.metadata_lookup.AbstractMetadataLookup;

/**
 * @author lord_pretzel
 *
 */
public class SQLiteMetadataLookup extends AbstractMetadataLookup {

	private static Logger log = Logger.getLogger(SQLiteMetadataLookup.class);

	public SQLiteMetadataLookup(Connection con) throws SQLException {
		super(con);
	}
	
	/* (non-Javadoc)
	 * @see org.gprom.jdbc.metadata_lookup.AbstractMetadataLookup#isWindow(java.lang.String)
  	 */
	@Override
	public int isWindow(String functionName) {
		// TODO Auto-generated method stub
		return 0;
	}

	/* (non-Javadoc)
	 * @see org.gprom.jdbc.metadata_lookup.AbstractMetadataLookup#isAgg(java.lang.String)
	 */
	@Override
	public int isAgg(String functionName) {
		// TODO Auto-generated method stub
		return 0;
	}

	/* (non-Javadoc)
	 * @see org.gprom.jdbc.metadata_lookup.AbstractMetadataLookup#getOpReturnType(java.lang.String, java.lang.String[], int)
	 */
	@Override
	public String getOpReturnType(String oName, String[] stringArray, int numArgs) {
		// TODO Auto-generated method stub
		return null;
	}

	/* (non-Javadoc)
	 * @see org.gprom.jdbc.metadata_lookup.AbstractMetadataLookup#getViewDefinition(java.lang.String)
	 */
	@Override
	public String getViewDefinition(String viewName) {
		// TODO Auto-generated method stub
		return null;
	}

	/* (non-Javadoc)
	 * @see org.gprom.jdbc.metadata_lookup.AbstractMetadataLookup#getTableDef(java.lang.String)
	 */
	@Override
	public String getTableDef(String tableName) {
		// TODO Auto-generated method stub
		return null;
	}

}